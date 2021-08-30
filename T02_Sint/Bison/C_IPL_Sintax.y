%define lr.type canonical-lr
%define parse.error verbose

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "symbol_table.h"
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* a);
    extern int yylineno;
    extern int column;
    extern int errors;
    extern FILE *yyin;
%}

%token LIST_TYPE
%token TYPE
%token INT
%token FLOAT
%token NIL
%token MINUS
%token SUMOP
%token MULOP
%right EXCLAM
%token LOGOP
%token RELOP
%token ASSIGN
%token KW_IF
%right KW_ELSE THEN
%token KW_FOR
%token KW_RETURN
%token READ
%token WRITE
%token STRING
%token BIN_LISTOP
%right UN_LISTOP
%token ID
%token ';'
%token '('
%token ')'
%token '{'
%token '}'
%token ','

%%

program: 
    declList
;

declList: 
    declList decl | decl
;


decl:
    varDecl | funDecl
;

varDecl:
    typeList ID ';'
;

typeList:
    LIST_TYPE TYPE | TYPE
;

funDecl:
    typeList ID '(' params ')' compoundStmt
;

params:
    paramList | {}
;

paramList:
    paramTypeList ',' paramList | paramTypeList
;

paramTypeList:
    typeList ID
;

stmt:
    expStmt | compoundStmt | ifStmt | forStmt | returnStmt | readFunc | writeFunc
;

expStmt:
    exp ';' | ';'
;

compoundStmt:
    '{' localDecls stmtList '}'
;

localDecls:
    localDecls varDecl | {}
;

stmtList:
    stmtList stmt | {}
;

ifStmt:
    KW_IF '(' logExp ')' stmt %prec THEN | KW_IF '(' logExp ')' stmt KW_ELSE stmt
;

forStmt:
    KW_FOR '(' exp ';' exp ';' exp ')' stmt
;

returnStmt:
    KW_RETURN ';' | KW_RETURN exp ';'
;

readFunc:
    READ '(' ID ')'
;

writeFunc:
    WRITE '(' logExp ')' | WRITE '(' STRING ')'
;

exp:
    ID ASSIGN exp | logExp
;

logExp:
    logExp LOGOP listExp | listExp
;

listExp:
    listExp BIN_LISTOP relExp | relExp
;

relExp:
    relExp RELOP sumExp | sumExp
;

sumExp:
    sumExp SUMOP mulExp | mulExp
;

mulExp:
    mulExp MULOP unaryListExp | unaryListExp
;

unaryListExp:
    unaryListOp unaryExp | unaryExp
;

unaryListOp:
    UN_LISTOP | EXCLAM
;

unaryExp:
    MINUS factor | factor
;

factor:
    '(' exp ')' | call | constant | ID
;

call:
    ID '(' args ')'
;

args:
    argList | {}
;

argList:
    argList ',' logExp | logExp
;

constant:
    INT | FLOAT | NIL
;

%%



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

