%define lr.type canonical-lr
%define parse.error verbose

%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/abstract_tree.h"
    #include "../lib/symbol_table.h"
    #include "../lib/scope_stack.h"
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* e);
    extern int prev_line;
    extern int prev_column;
    extern int errors;
    extern FILE *yyin;
    Node* abstract_tree;
    int position = 0; 
    int scope = 0;
    StackNode* scope_root = NULL;
    Symbol* symbol_root = NULL;
    int param_qt = 0;
    int param_call = 0;
    char* param_type[10];
%}

%union{
    Token token;
    Node* node;
}

%token <token> TYPE INT FLOAT NIL
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
%type <node> unaryLogExp
%type <node> listExp
%type <node> relExp
%type <node> sumExp
%type <node> mulExp
%type <node> unaryListExp
%type <node> unaryExp
%type <node> factor
%type <node> call
%type <node> args
%type <node> argList
%type <node> constant

%%

program: 
    declList {
        abstract_tree = populate_node("Topo do Programa");
        abstract_tree->child_1 = $1;    
    }
;

declList: 
    decl declList {
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
    |error { populate_node("Erro"); }
;

varDecl:
    TYPE ID ';' {

        if (is_repeated(symbol_root, $2.scope, $2.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2.line, $2.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variável "RED"%s"REGULAR" declarada mais de uma vez!\n", $2.content);
            errors++;
        }

        Node* type_node = populate_node("Tipo da variável");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declaração de Variável");
        $$->child_1 = type_node; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;

        pushSymbol (
            &symbol_root,
            $2.line, 
            $2.column, 
            $2.scope,
            $2.content,
            type_node->token->content,
            0,
            0   
        );
        position++;
    }
;

funDecl:
    TYPE ID '(' params ')' compoundStmt {

        if (is_repeated(symbol_root, $2.scope, $2.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2.line, $2.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Função "RED"%s"REGULAR" declarada mais de uma vez!\n", $2.content);
            errors++;
        }

        Node* type_node = populate_node("Tipo da Função");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declaração de Função");
        $$->child_1 = type_node; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;
        $$->child_2 = $4;
        $$->child_3 = $6;

        pushSymbol (
            &symbol_root,
            $2.line, 
            $2.column, 
            $2.scope,
            $2.content,
            type_node->token->content,
            1,
            param_qt 
        );
        position++;
        param_qt = 0;
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
    TYPE ID {

        if (is_repeated(symbol_root, $2.scope, $2.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2.line, $2.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Parâmetro "RED"%s"REGULAR" declarado mais de uma vez!\n", $2.content);
            errors++;
        }

        Node* type_node = populate_node("Tipo da Função");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declaração de Parâmetro");
        $$->child_1 = type_node; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;

        pushSymbol (
            &symbol_root,
            $2.line, 
            $2.column, 
            $2.scope,
            $2.content,
            type_node->token->content,
            2,
            0   
        );
        position++;
        param_qt++;
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
    | error { populate_node("Erro"); }
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
    | '{' '}' {$$ = NULL;}
;

localDecls:
    varDecl localDecls {
        $$ = populate_node("Declaração de Variáveis");
        $$->child_1 = $1;
        $$->child_2 = $2;
    }
    | stmt localDecls {
        $$ = populate_node("Declaração de Statement");
        $$->child_1 = $1;
        $$->child_2 = $2;
    }
    | varDecl {
        $$ = $1;
    }
    | stmt {
        $$ = $1;
    }
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

        if (!symbol_exists(symbol_root, scope_root, $3.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $3.line, $3.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variável "RED"%s"REGULAR" não declarada!\n", $3.content);
            errors++;
        } else if ((strcmp(get_type(symbol_root, scope_root, $3.content), "int") != 0) && (strcmp(get_type(symbol_root, scope_root, $3.content), "float") != 0)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $3.line, $3.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variável "RED"%s"REGULAR" deve ser do tipo int ou float!\n", $3.content);
            errors++;
        }

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

        int return_size = (strlen(get_type(symbol_root, scope_root, $1.content)) + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, get_type(symbol_root, scope_root, $1.content));

        if (!symbol_exists(symbol_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variável "RED"%s"REGULAR" não declarada!\n", $1.content);
            errors++;
        } else if (symbol_int(symbol_root, scope_root, $1.content)) {
            if (!is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" só pode receber valores do tipo simples!\n", $1.content);
                errors++;
            } else if (is_float($3->return_type)) {
                // casting de float para int
            }
        } else if (symbol_float(symbol_root, scope_root, $1.content)) {
            if (!is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" só pode receber valores do tipo simples!\n", $1.content);
                errors++;
            } else if (is_int($3->return_type)) {
                // casting de int para float
            }
        } else if (symbol_int_list(symbol_root, scope_root, $1.content)) {
            if (!is_int_list($3->return_type) && !is_nil($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" só pode receber valores do tipo INT LIST ou NIL!\n", $1.content);
                errors++;
            }
        } else if (symbol_float_list(symbol_root, scope_root, $1.content)) {
            if (!is_float_list($3->return_type) && !is_nil($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" só pode receber valores do tipo FLOAT LIST ou NIL!\n", $1.content);
                errors++;
            }
        }
    }
    | logExp{
        $$ = $1;
    }
;

logExp:
    logExp LOGOP unaryLogExp {
        $$ = populate_node("Operação Lógica");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;  

        int return_size = (strlen("int") + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, "int");
    }
    | unaryLogExp{
        $$ = $1;
    }
;

unaryLogExp:
    EXCLAM listExp {

        if (is_int_list($2->return_type) || is_float_list($2->return_type) || is_nil($2->return_type)) {
            $$ = populate_node("Operação Unária de Lista");
            $$->token = (Token*) malloc(sizeof(Token));
            *$$->token = $1;
            $$->child_1 = $2;

            if (is_int_list($2->return_type)) {
                int return_size = (strlen("int list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int list");
            } else if (is_float_list($2->return_type)){
                int return_size = (strlen("float list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float list");
            } else if (is_nil($2->return_type)){
                int return_size = (strlen("undefined") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "undefined");
            } 

        } else {
            $$ = populate_node("Operação Lógica Unária");
            $$->token = (Token*) malloc(sizeof(Token));
            *$$->token = $1; 
            $$->child_1 = $2;

            int return_size = (strlen("int") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "int");
        }  
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

        if ((strcmp($2.content, ":") == 0)) {
            if (!is_simple_type($1->return_type, $1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" deve ser dos tipos INT ou FLOAT!\n", $1->token->content);
                errors++;
            } else if (is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável "RED"%s"REGULAR" deve ser dos tipos INT LIST ou FLOAT LIST!\n", $3->token->content);
                errors++;
            } else if (is_int_list($3->return_type)) {
                if (is_float($1->return_type)) {
                    // casting de float para int em $1    
                }
                int return_size = (strlen("int list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int list");
            } else if (is_float_list($3->return_type)) {
                if (is_int($1->return_type)) {
                    // casting de int para float em $1    
                }
                int return_size = (strlen("float list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float list");
            }
        } else if ((strcmp($2.content, ">>") == 0)) {
            Symbol* functions_symbol = get_function(symbol_root, $1->token->content);

            if (functions_symbol->param_qt != 1) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável à esquerda do operando "RED">>"REGULAR" deve ser uma função unária, a função usada possui "RED"%d"REGULAR" argumentos!\n", functions_symbol->param_qt);
                errors++;
            } else if (!is_simple_type($1->return_type, $1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A função à esquerda do operando "RED">>"REGULAR" deve retornar um INT ou FLOAT!\n");
                errors++;
            } else if (is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável à direita do operando "RED">>"REGULAR" deve ser uma INT LIST ou FLOAT LIST!\n");
                errors++;
            } else if (is_int($1->return_type)) {
                int return_size = (strlen("int list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int list");
            } else if (is_float($1->return_type)) {
                int return_size = (strlen("float list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float list");
            }
        } else if ((strcmp($2.content, "<<") == 0)) {
            Symbol* functions_symbol = get_function(symbol_root, $1->token->content);

            if (functions_symbol->param_qt != 1) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável à esquerda do operando "RED"<<"REGULAR" deve ser uma função unária, a função usada possui "RED"%d"REGULAR" argumentos!\n", functions_symbol->param_qt);
                errors++;
            } else if (!is_simple_type($1->return_type, $1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A função à esquerda do operando "RED"<<"REGULAR" deve retornar um INT ou FLOAT!\n");
                errors++;
            } else if (is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" A variável à direita do operando "RED"<<"REGULAR" deve ser uma INT LIST ou FLOAT LIST!\n");
                errors++;
            } else if (is_int_list($3->return_type)) {
                int return_size = (strlen("int list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int list");
            } else if (is_float_list($3->return_type)) {
                int return_size = (strlen("float list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float list");
            }
        }
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
        
        int return_size = (strlen("int") + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, "int");  

        if (is_simple_type($1->return_type, $3->return_type)) {            
            if (!is_same_type($1->return_type, $3->return_type) && is_float($1->return_type)) {
                // casting de int->float em $3
            } else if (!is_same_type($1->return_type, $3->return_type) && is_float($1->return_type)) {
                // casting de int->float em $1
            }         
        } else if ( (strcmp($2.content, "==") == 0) || (strcmp($2.content, "!=") == 0) ) {
            if ( !( ( is_nil($1->return_type) && is_int_list($3->return_type) ) || 
                    ( is_nil($1->return_type) && is_float_list($3->return_type) ) ||
                    ( is_int_list($1->return_type) && is_nil($3->return_type) ) ||
                    ( is_float_list($1->return_type) && is_nil($3->return_type) ) ||
                    ( is_nil($1->return_type) && is_nil($3->return_type) ) ) 
                ) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Não é possível realizar uma operação de "RED"%s"REGULAR" entre um "RED"%s"REGULAR" e um "RED"%s"REGULAR"! \n", $2.content, $1->return_type, $3->return_type);
                errors++;
                }
        } else {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Não é possível realizar uma operação de "RED"%s"REGULAR" entre um "RED"%s"REGULAR" e um "RED"%s"REGULAR"! \n", $2.content, $1->return_type, $3->return_type);
                errors++; 
        }
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

        if (!is_simple_type($1->return_type, $3->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variáveis de uma soma devem ser do tipo INT ou FLOAT!\n");
            errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            int return_size = (strlen($1->return_type) + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, $1->return_type);
        } else if (is_float($1->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $3
        } else if (is_float($3->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $1
        }
    }
    | sumExp MINUS mulExp {
        $$ = populate_node("Operação de Subtração");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;

        if (!is_simple_type($1->return_type, $3->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variáveis de uma subtração devem ser do tipo INT ou FLOAT!\n");
            errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            int return_size = (strlen($1->return_type) + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, $1->return_type);
        } else if (is_float($1->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $3
        } else if (is_float($3->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $1
        } 
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

        if (!is_simple_type($1->return_type, $3->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variáveis de uma multiplicação ou divisão devem ser do tipo INT ou FLOAT!\n");
            errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            int return_size = (strlen($1->return_type) + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, $1->return_type);
        } else if (is_float($1->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $3
        } else if (is_float($3->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");

            //casting de int pra float em $1
        }
    }
    | unaryListExp {
        $$ = $1;
    }
;

unaryListExp:
    UN_LISTOP unaryExp {
        $$ = populate_node("Operação Unária de Lista");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1; 
        $$->child_1 = $2;

        if (is_simple_type($2->return_type, $2->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" O operando %s deve ser do tipo INT LIST ou FLOAT LIST!\n", $1.content);
            errors++;            
        } else if ((strcmp($1.content, "?") == 0)) {
            if (is_int_list($2->return_type)) {
                int return_size = (strlen("int") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int");
            } else {
                int return_size = (strlen("float") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float");
            }
        } else if (strcmp($1.content, "%") == 0) {
            if (is_int_list($2->return_type)) {
                int return_size = (strlen("int list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "int list");
            } else {
                int return_size = (strlen("float list") + 1) * sizeof(char);
                $$->return_type = (char*) malloc(sizeof(return_size));
                strcpy($$->return_type, "float list");
            }
        }
    }
    | unaryExp {
        $$ = $1;
    }
;

unaryExp:
    MINUS factor {
        $$ = populate_node("Expressão Aritmética Unária");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $2;

        if (!is_simple_type($2->return_type, $2->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" O operando "RED"-%s"REGULAR" deve ser do tipo INT ou LIST!\n", $2->token->content);
            errors++;            
        } else if (is_int($2->return_type)) {
            int return_size = (strlen("int") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "int");
        } else if (is_float($2->return_type)) {
            int return_size = (strlen("float") + 1) * sizeof(char);
            $$->return_type = (char*) malloc(sizeof(return_size));
            strcpy($$->return_type, "float");
        } 
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

        if (!symbol_exists(symbol_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Variável "RED"%s"REGULAR" não declarada!\n", $1.content);
            errors++;
        }

        $$ = populate_node("ID");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;

        int return_size = (strlen(get_type(symbol_root, scope_root, $1.content)) + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, get_type(symbol_root, scope_root, $1.content));
    }
;

call:
    ID '(' args ')' {

        Symbol* functions_symbol = get_function(symbol_root, $1.content);
        int param_locations = param_location(functions_symbol, 0);

        if (!symbol_exists(symbol_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" Função "RED"%s"REGULAR" não declarada!\n", $1.content);
            errors++;
        } else if (param_call != functions_symbol->param_qt) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" O número de parâmetros da chamada da função ");
            printf(""RED"%s"REGULAR" tem "RED"%d"REGULAR" argumentos, entretanto ele deveria ter "RED"%d"REGULAR" argumentos\n", $1.content, param_call, functions_symbol->param_qt);
            errors++;            
        } else {
            for (int i = 0; i < param_call; i++) {
                Symbol* param_symbol = get_param(functions_symbol, param_locations);
                param_locations--;
                if ((strcmp(param_symbol->type, param_type[i]) != 0)) {
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                    printf(""RED"ERRO SEMÂNTICO ---> "REGULAR" O tipo do %dº parâmetro da chamada da função "RED"%s"REGULAR" deveria ser "RED"%s"REGULAR" e não "RED"%s"REGULAR" \n", (i+1), $1.content, param_symbol->type, param_type[i]);
                    errors++;
                }
            }
        }

        $$ = populate_node("Chamada de Função"); 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $3;

        int return_size = (strlen(get_type(symbol_root, scope_root, $1.content)) + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, get_type(symbol_root, scope_root, $1.content));
        param_call = 0;  
    }
;

args:
    argList {
       $$ = $1; 
    }
    | {$$ = NULL;}
;

argList:
    logExp ',' argList {
        param_type[param_call] = $1->return_type;

        $$ = populate_node("Lista de Argumentos");
        $$->child_1 = $1;
        $$->child_2 = $3;
        param_call++;
    }
    | logExp {
        param_type[param_call] = $1->return_type;

        $$ = $1;
        param_call++;
    }
;

constant:
    INT {
        $$ = populate_node("Int");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;

        int return_size = (strlen("int") + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, "int");  
    }
    | FLOAT {
        $$ = populate_node("Float");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;

        int return_size = (strlen("float") + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, "float");
    }
    | NIL {
        $$ = populate_node("NIL");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;

        int return_size = (strlen("NIL") + 1) * sizeof(char);
        $$->return_type = (char*) malloc(sizeof(return_size));
        strcpy($$->return_type, "NIL");
    }
;

%%

extern void yyerror(const char* e) {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", prev_line, prev_column);
    printf(""RED"ERRO SINTÁTICO ---> "REGULAR"%s\n", e);
    errors++;
}  

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    argc++;
    if(yyin){
        yyparse();
        if (errors == 0) {
            print_node(abstract_tree, 1);
            print_table_header();
            for (int i = 0; i < position; i++) { 
                print_symbol(symbol_root);
                popSymbol(&symbol_root);
            }
            pop_scope(&scope_root);
            printf("\n");
        } else {
            printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros no arquivo. A árvore abstrata não será mostrada caso haja erros!\n\n", errors);
            print_table_header();
            for (int i = 0; i < position; i++) { 
                print_symbol(symbol_root);
                popSymbol(&symbol_root);
            }
            pop_scope(&scope_root);
            printf("\n");
        }
    }
    else {
        printf("Argumento inválido ou inexistente. Tenha certeza que o caminho do arquivo passado como argumento está certo!\n");
        exit(0);
    }
    fclose(yyin);
    yylex_destroy();
    return 0;
}

