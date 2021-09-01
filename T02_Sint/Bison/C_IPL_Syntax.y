%define lr.type canonical-lr
%define parse.error verbose

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/abstract_tree.h"
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    extern Node* populate_node(char* identifier);
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* e);
    extern int yylineno;
    extern int column;
    extern int errors;
    extern FILE *yyin;   
%}

%union{
    Token token;
    Node* node;
}

%token <token> LIST_TYPE TYPE
%token <token> INT FLOAT NIL
%token <token> MINUS
%token <token> READ WRITE
%token <token> STRING ID
%token <token> BIN_LISTOP RELOP ASSIGN
%token <token> KW_IF KW_FOR KW_RETURN
%token <token> ';' '(' ')' '{' '}' ','
%right <token> EXCLAM UN_LISTOP
%right <token> KW_ELSE THEN
%left  <token> SUMOP MULOP LOGOP

%type <node> program
%type <node> declList
%type <node> decl
%type <node> varDecl
%type <node> typeList
%type <node> funDecl
%type <node> params
%type <node> paramList
%type <node> paramTypeList
%type <node> stmt
%type <node> expStmt
%type <node> compoundStmt
%type <node> localDecls
%type <node> ifStmt
%type <node> forStmt
%type <node> returnStmt
%type <node> readFunc
%type <node> writeFunc
%type <node> exp
%type <node> logExp
%type <node> listExp
%type <node> relExp
%type <node> sumExp
%type <node> mulExp
%type <node> unaryListExp
%type <node> unaryListOp
%type <node> unaryExp
%type <node> factor
%type <node> call
%type <node> args
%type <node> argList
%type <node> constant

%%

program: 
    declList {
        $$ = $1;    
    }
;

declList: 
    declList decl {
        $$ = populate_node("Lista de Declarações");
        $$->child_1 = $1;
        $$->child_2 = $2;  
    }
    | decl {
        $$ = $1;    
    }
;

decl:
    varDecl {
        $$ = $1;
    }
    | funDecl {
        $$ = $1; 
    }
;

varDecl:
    typeList ID ';' {
        $$ = populate_node("Declaração de Variável");
        $$->child_1 = $1; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;
    }
;

typeList:
    TYPE LIST_TYPE {
        $$ = populate_node("Tipo de Lista");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
    | TYPE {
        $$ = populate_node("Tipo Simples");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
;

funDecl:
    typeList ID '(' params ')' compoundStmt {
        $$ = populate_node("Declaração de Função");
        $$->child_1 = $1; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;
        $$->child_2 = $4;
        $$->child_3 = $6; 
    }
;

params:
    paramList {
       $$ = $1; 
    }
    | {$$ = NULL;}
;

paramList:
    paramTypeList ',' paramList {
        $$ = populate_node("Lista de Parâmetros");
        $$->child_1 = $1;
        $$->child_2 = $3;
    }
    | paramTypeList {
        $$ = $1;
    }
;

paramTypeList:
    typeList ID {    
        $$ = populate_node("Declaração de Parâmetro");
        $$->child_1 = $1; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;
    }
;

stmt:
    expStmt {
        $$ = $1;
    }
    | compoundStmt {
        $$ = $1;
    }
    | ifStmt {
        $$ = $1;
    }
    | forStmt {
        $$ = $1;
    }
    | returnStmt {
        $$ = $1;
    }
    | readFunc {
        $$ = $1;
    }
    | writeFunc {
        $$ = $1;
    }
;

expStmt:
    exp ';' {
        $$ = $1; 
    }
    | ';' {$$ = NULL;}
;

compoundStmt:
    '{' localDecls '}' {
        $$ = $2;    
    }
;

localDecls:
    localDecls varDecl {
        $$ = populate_node("Declaração de Variáveis");
        $$->child_1 = $1;
        $$->child_2 = $2;
    }
    | localDecls stmt {
        $$ = populate_node("Declaração de Statements");
        $$->child_1 = $1;
        $$->child_2 = $2;
    }
    | {$$ = NULL;}
;

ifStmt:
    KW_IF '(' logExp ')' stmt %prec THEN {
        $$ = populate_node("Função IF");
        $$->child_1 = $3;
        $$->child_2 = $5;
    }
    | KW_IF '(' logExp ')' stmt KW_ELSE stmt {
        $$ = populate_node("Função IF ELSE");
        $$->child_1 = $3;
        $$->child_2 = $5;
        $$->child_3 = $7;
    }
;

forStmt:
    KW_FOR '(' exp ';' exp ';' exp ')' stmt {
        $$ = populate_node("Loop For");
        $$->child_1 = $3;
        $$->child_2 = $5;
        $$->child_3 = $7;
        $$->child_4 = $9;
    }
;

returnStmt:
    KW_RETURN expStmt {
        $$ = populate_node("Retorno");
        $$->child_1 = $2; 
    }
;

readFunc:
    READ '(' ID ')' {
        $$ = populate_node("Leitura");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $3; 
    }
;

writeFunc:
    WRITE '(' logExp ')' {
        $$ = populate_node("Escrita de uma Expressão");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $3; 
    }
    | WRITE '(' STRING ')' {

        Node* string_node = populate_node("String");
        string_node->token = (Token*) malloc(sizeof(Token));
        *string_node->token = $3;

        $$ = populate_node("Escrita de uma String");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = string_node; 
    }
;

exp:
    ID ASSIGN exp {
        $$ = populate_node("Atribuição de variável");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1; 
        $$->child_1 = $3;  
    }
    | logExp{
        $$ = $1;
    }
;

logExp:
    logExp LOGOP listExp {
        $$ = populate_node("Operação Lógica");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  
    }
    | listExp{
        $$ = $1;
    }
;

listExp:
    listExp BIN_LISTOP relExp {
        $$ = populate_node("Operação Binária de Listas");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  
    }
    | relExp {
        $$ = $1;
    }
;

relExp:
    relExp RELOP sumExp {
        $$ = populate_node("Operação Relacional");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  
    }
    | sumExp {
        $$ = $1;
    }
;

sumExp:
    sumExp SUMOP mulExp {
        $$ = populate_node("Operação de Soma");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  
    }
    | mulExp {
       $$ = $1; 
    }
;

mulExp:
    mulExp MULOP unaryListExp {
        $$ = populate_node("Operação de Multiplicação");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  
    }
    | unaryListExp {
        $$ = $1;
    }
;

unaryListExp:
    unaryListOp unaryExp {
        $$ = populate_node("Operação Unária de Lista");
        $$->child_1 = $1;
        $$->child_2 = $2;   
    }
    | unaryExp {
        $$ = $1;
    }
;

unaryListOp:
    UN_LISTOP {    
        $$ = populate_node("Operador Unário de Lista");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;    
    }
    | EXCLAM {
        $$ = populate_node("Ponto de Exclamação");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
;

unaryExp:
    MINUS factor {
        $$ = populate_node("Expressão Aritmética Unária");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $2;    
    }
    | factor {
        $$ = $1;
    }
;

factor:
    '(' exp ')' {
       $$ = $2; 
    }
    | call {
       $$ = $1; 
    }
    | constant {
       $$ = $1; 
    }
    | ID {
        $$ = populate_node("ID");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
;

call:
    ID '(' args ')' {
        $$ = populate_node("Chamada de Função"); 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $3;    
    }
;

args:
    argList {
       $$ = $1; 
    }
    | {$$ = NULL;}
;

argList:
    argList ',' logExp {
        $$ = populate_node("Lista de Argumentos");
        $$->child_1 = $1;
        $$->child_2 = $3;
    }
    | logExp {
        $$ = $1;
    }
;

constant:
    INT {
        $$ = populate_node("ID");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
    | FLOAT {
        $$ = populate_node("Float");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
    | NIL {
        $$ = populate_node("NIL");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
    }
;

%%

 extern void yyerror (char const* e) {
   fprintf (stderr, "%s\n", e);
 }

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    if(yyin){
        yyparse();
        if (errors == 0) {
            printf("\nNão foi encontrado nenhum erro. O arquivo está lexicamente correto!\n");
        } else printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros no arquivo. Ele não está lexicamente correto!\n", errors);
    }
    else {
        printf("Argumento inválido ou inexistente. Tenha certeza que o caminho do arquivo passado como argumento está certo!\n");
        exit(0);
    }
    fclose(yyin);
    yylex_destroy();
    return 0;
}

