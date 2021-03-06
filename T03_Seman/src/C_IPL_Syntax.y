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
    extern int lex_sint_errors;
    extern FILE *yyin;
    Node* abstract_tree;
    int position = 0; 
    int scope = 0;
    StackNode* scope_root = NULL;
    Symbol* symbol_root = NULL;
    int param_qt = 0;
    int param_call = 0;
    char* function_type = NULL;
    char* function_name = NULL;
    char* call_name = NULL;
    int param_locations = 0;
    Symbol* functions_symbol = NULL;
    int is_return = 0;
    int function_call = 0;
    int semantic_errors = 0;
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
        $$ = populate_node("Lista de Declara????es");
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
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??vel "RED"%s"REGULAR" declarada mais de uma vez!\n", $2.content);
            semantic_errors++;
        }

        Node* type_node = populate_node("Tipo da vari??vel");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declara????o de Vari??vel");
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
            0,
            "none"   
        );
        position++;
    }
;

funDecl:
    TYPE ID '(' params ')' {

        if (is_repeated(symbol_root, $2.scope, $2.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2.line, $2.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Fun????o "RED"%s"REGULAR" declarada mais de uma vez!\n", $2.content);
            semantic_errors++;
        }

        char* default_return = NULL;

        if (is_int($1.content)) {
            default_return = strdup("0");
        } else if (is_float($1.content)) {
            default_return = strdup("0.0");
        } else if (is_int_list($1.content) || is_float_list($1.content)) {
            default_return = strdup("NIL");
        } else {
            default_return = strdup("error");
        }

        pushSymbol (
            &symbol_root,
            $2.line, 
            $2.column, 
            0,
            $2.content,
            $1.content,
            1,
            param_qt,
            default_return
        );
        position++;
        param_qt = 0;

        if (function_type) free(function_type);
        if (function_name) free(function_name);
        free(default_return);

        function_type = strdup($1.content);
        function_name = strdup($2.content);

    } compoundStmt {

        Node* type_node = populate_node("Tipo da Fun????o");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declara????o de Fun????o");
        $$->child_1 = type_node; 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2;
        $$->child_2 = $4;
        $$->child_3 = $7;

        if (is_int($1.content)) {
            $$->default_return = strdup("0");
        } else if (is_float($1.content)) {
            $$->default_return = strdup("0.0");
        } else if (is_int_list($1.content) || is_float_list($1.content)) {
            $$->default_return = strdup("NIL");
        } else {
            $$->default_return = strdup("error");
        }
        is_return = 0;
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
        $$ = populate_node("Lista de Par??metros");
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
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Par??metro "RED"%s"REGULAR" declarado mais de uma vez!\n", $2.content);
            semantic_errors++;
        }

        Node* type_node = populate_node("Tipo da Fun????o");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = $1;

        $$ = populate_node("Declara????o de Par??metro");
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
            0,
            "none"  
        );
        position++;
        param_qt++;
    }
    | error { populate_node("Erro"); }
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
        $$ = populate_node("Declara????o de Vari??veis");
        $$->child_1 = $1;
        $$->child_2 = $2;
    }
    | stmt localDecls {
        $$ = populate_node("Declara????o de Statement");
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
        $$ = populate_node("Fun????o IF");
        $$->child_1 = $3;
        $$->child_2 = $5;
    }
    | KW_IF '(' logExp ')' stmt KW_ELSE stmt {
        $$ = populate_node("Fun????o IF ELSE");
        $$->child_1 = $3;
        $$->child_2 = $5;
        $$->child_3 = $7;
    }
    | KW_IF '(' error ')' stmt %prec THEN { populate_node("Erro"); }
    | KW_IF '(' error ')' stmt KW_ELSE stmt { populate_node("Erro"); }
;

forStmt:
    KW_FOR '(' exp ';' exp ';' exp ')' stmt {
        $$ = populate_node("Loop For");
        $$->child_1 = $3;
        $$->child_2 = $5;
        $$->child_3 = $7;
        $$->child_4 = $9;
    }
    | KW_FOR '(' error ')' stmt { populate_node("Erro"); }
;

returnStmt:
    KW_RETURN expStmt {
        $$ = populate_node("Retorno");
        $$->child_1 = $2;

        if (not_an_error($2->return_type)) {
            if (!is_simple_type($2->return_type, function_type)) {
                if (strcmp($2->return_type, function_type) != 0 ){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2->token->line, $2->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo da fun????o "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto est?? retornando "RED"%s"REGULAR"\n", function_name, function_type, $2->return_type);
                    semantic_errors++;
                    }
            } else if (!is_simple_type($2->return_type, $2->return_type) || !is_simple_type(function_type, function_type)) {
                if (strcmp($2->return_type, function_type) != 0){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $2->token->line, $2->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo da fun????o "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto est?? retornando "RED"%s"REGULAR"\n", function_name, function_type, $2->return_type);
                    semantic_errors++;
                }
            } else if (is_simple_type($2->return_type, function_type)) {
                if (is_float(function_type) && is_int($2->return_type)){
                    $2->cast_to_float = 1;
                } else if (is_int(function_type) && is_float($2->return_type)){
                    $2->cast_to_int = 1;
                }
            }
        }
        is_return++;
        
    }
;

readFunc:
    READ '(' ID ')' ';'{

        if (!symbol_exists(symbol_root, scope_root, scope_root, $3.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $3.line, $3.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??vel "RED"%s"REGULAR" n??o declarada!\n", $3.content);
            semantic_errors++;
        } else if ((strcmp(get_type(symbol_root, scope_root, scope_root, $3.content), "int") != 0) && (strcmp(get_type(symbol_root, scope_root, scope_root, $3.content), "float") != 0)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $3.line, $3.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??vel "RED"%s"REGULAR" deve ser do tipo INT ou FLOAT, entretanto ela ?? "RED"%s"REGULAR"!\n", $3.content, get_type(symbol_root, scope_root, scope_root, $3.content));
            semantic_errors++;
        }

        $$ = populate_node("Leitura");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $3; 
    }
    | READ error ';' { populate_node("Erro"); }
;

writeFunc:
    WRITE '(' logExp ')' ';'{
        $$ = populate_node("Escrita de uma Express??o");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $3; 
    }
    | WRITE '(' STRING ')' ';'{

        Node* string_node = populate_node("String");
        string_node->token = (Token*) malloc(sizeof(Token));
        *string_node->token = $3;

        $$ = populate_node("Escrita de uma String");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = string_node; 
    }
    | WRITE error ';' { populate_node("Erro"); }
;

exp:
    ID ASSIGN exp {

        $$ = populate_node("Atribui????o de vari??vel");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1; 
        $$->child_1 = $3;
        free($$->return_type);
        $$->return_type = strdup(get_type(symbol_root, scope_root, scope_root, $1.content));

        if (!symbol_exists(symbol_root, scope_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??vel "RED"%s"REGULAR" n??o declarada!\n", $1.content);
            semantic_errors++;
        } else if (get_function(symbol_root, $3->token->content) && !function_call) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Fun????o "RED"%s"REGULAR" declarada sem par??metros!\n", $3->token->content);
            semantic_errors++;
        } else if (symbol_int(symbol_root, scope_root, $1.content) && not_an_error($3->return_type)) {
            if (!is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" A vari??vel "RED"%s"REGULAR" s?? pode receber valores do tipo INT ou FLOAT, entretanto est?? recebendo "RED"%s"REGULAR"!\n", $1.content, $3->return_type);
                semantic_errors++;
            } else if (is_float($3->return_type)) {
                $3->cast_to_int = 1;
            }
        } else if (symbol_float(symbol_root, scope_root, $1.content) && not_an_error($3->return_type)) {
            if (!is_simple_type($3->return_type, $3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" A vari??vel "RED"%s"REGULAR" s?? pode receber valores do tipo INT ou FLOAT, entretanto est?? recebendo "RED"%s"REGULAR"!\n", $1.content, $3->return_type);
                semantic_errors++;
            } else if (is_int($3->return_type)) {
                $3->cast_to_float = 1;
            }
        } else if (symbol_int_list(symbol_root, scope_root, $1.content) && not_an_error($3->return_type)) {
            if (!is_int_list($3->return_type) && !is_nil($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" A vari??vel "RED"%s"REGULAR" s?? pode receber valores do tipo INT LIST ou NIL, entretanto est?? recebendo "RED"%s"REGULAR"!\n", $1.content, $3->return_type);
                semantic_errors++;
            }
        } else if (symbol_float_list(symbol_root, scope_root, $1.content) && not_an_error($3->return_type)) {
            if (!is_float_list($3->return_type) && !is_nil($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" A vari??vel "RED"%s"REGULAR" s?? pode receber valores do tipo FLOAT LIST ou NIL, entretanto est?? recebendo "RED"%s"REGULAR"!\n", $1.content, $3->return_type);
                semantic_errors++;
            }
        }
        function_call = 0;
    }
    | logExp{
        $$ = $1;
    }
;

logExp:
    logExp LOGOP listExp {
        $$ = populate_node("Opera????o L??gica");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;
        free($$->return_type);
        $$->return_type = strdup("int");
    }
    | listExp{
        $$ = $1;
    }
;

listExp:
    relExp BIN_LISTOP listExp{
        $$ = populate_node("Opera????o Bin??ria de Listas");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;

        if ((strcmp($2.content, ":") == 0)) {

            if (get_function(symbol_root, $1->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED":"REGULAR" deve ser uma vari??vel dos tipos INT ou FLOAT, entretanto est?? recebendo uma fun????o!\n");
                semantic_errors++;
            } else if (get_function(symbol_root, $3->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED":"REGULAR" deve ser uma vari??vel dos tipos INT LIST ou FLOAT LIST, entretanto est?? recebendo uma fun????o!\n");
                semantic_errors++;
            } else if (!is_simple_type($1->return_type, $1->return_type) && not_an_error($1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED":"REGULAR" deve ser dos tipos INT ou FLOAT, entretanto est?? sendo passado um "RED"%s"REGULAR"!\n", $1->return_type);
                semantic_errors++;
            } else if (is_simple_type($3->return_type, $3->return_type) && not_an_error($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED":"REGULAR" deve ser dos tipos INT LIST ou FLOAT LIST, entretanto est?? sendo passado um "RED"%s"REGULAR"!\n", $3->return_type);
                semantic_errors++;
            } else if (is_int_list($3->return_type)) {
                if (is_float($1->return_type)) {
                    $1->cast_to_int = 1;
                }
                free($$->return_type);
                $$->return_type = strdup("int list");
            } else if (is_float_list($3->return_type)) {
                if (is_int($1->return_type)) {
                    $1->cast_to_float = 1;
                }
                free($$->return_type);
                $$->return_type = strdup("float list");
            }
        } else if ((strcmp($2.content, ">>") == 0)) {
            Symbol* functions_symbol = get_function(symbol_root, $1->token->content);
            int param_locations = 0;
            Symbol* param_symbol = NULL;

            if (get_function(symbol_root, $1->token->content)) {
                param_locations = param_location(functions_symbol, 0);
                param_symbol = get_param(functions_symbol, param_locations);
            }

            if (!symbol_exists(symbol_root, scope_root, scope_root, $1->token->content)) {
                // Bug que se usar symbol_exists sem ser negado crasha o programa
            } else if (!get_function(symbol_root, $1->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED">>"REGULAR" deve ser uma fun????o un??ria, entretanto est?? recebendo uma vari??vel!\n");
                semantic_errors++;
            } else if (get_function(symbol_root, $3->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED">>"REGULAR" deve ser uma vari??vel dos tipos INT LIST ou FLOAT LIST, entretanto est?? recebendo uma fun????o!\n");
                semantic_errors++;
            } else if (functions_symbol->param_qt != 1) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED">>"REGULAR" deve ser uma fun????o un??ria, entretanto a fun????o usada possui "RED"%d"REGULAR" argumentos!\n", functions_symbol->param_qt);
                semantic_errors++;
            } else if (!is_simple_type($1->return_type, $1->return_type) && not_an_error($1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED">>"REGULAR" deve retornar um INT ou FLOAT, entretanto est?? sendo retornado um "RED"%s"REGULAR"!\n", $1->return_type);
                semantic_errors++;
            } else if (is_simple_type($3->return_type, $3->return_type) && not_an_error($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED">>"REGULAR" deve ser uma INT LIST ou FLOAT LIST, entretanto est?? sendo retornado um "RED"%s"REGULAR"!\n", $3->return_type);
                semantic_errors++;
            } else if (!is_simple_type(param_symbol->type, param_symbol->type) && not_an_error(param_symbol->type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro da fun????o "RED"%s"REGULAR" deveria ser INT ou FLOAT, entretanto ?? "RED"%s"REGULAR"!\n", $1->token->content, param_symbol->type);
                semantic_errors++;
            } else if (is_int($1->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("int list");
            } else if (is_float($1->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("float list");
            }
        } else if ((strcmp($2.content, "<<") == 0)) {
            Symbol* functions_symbol = get_function(symbol_root, $1->token->content);
            int param_locations = 0;
            Symbol* param_symbol = NULL;

            if (get_function(symbol_root, $1->token->content)) {
                param_locations = param_location(functions_symbol, 0);
                param_symbol = get_param(functions_symbol, param_locations);
            }

            if (!symbol_exists(symbol_root, scope_root, scope_root, $1->token->content)) {
                // Bug que se usar symbol_exists sem ser negado crasha o programa
            } else if (!get_function(symbol_root, $1->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED"<<"REGULAR" deve ser uma fun????o un??ria, entretanto est?? recebendo uma vari??vel!\n");
                semantic_errors++;
            } else if (get_function(symbol_root, $3->token->content)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED"<<"REGULAR" deve ser uma vari??vel dos tipos INT LIST ou FLOAT LIST, entretanto est?? recebendo uma fun????o!\n");
                semantic_errors++;
            } else  if (functions_symbol->param_qt != 1) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED"<<"REGULAR" deve ser uma fun????o un??ria, a fun????o usada possui "RED"%d"REGULAR" argumentos!\n", functions_symbol->param_qt);
                semantic_errors++;
            } else if (!is_simple_type($1->return_type, $1->return_type) && not_an_error($1->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? esquerda do operando "RED"<<"REGULAR" deve retornar um INT ou FLOAT, entretanto est?? sendo retornado um "RED"%s"REGULAR"!\n", $1->return_type);
                semantic_errors++;
            } else if (is_simple_type($3->return_type, $3->return_type) && not_an_error($3->return_type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operador ?? direita do operando "RED"<<"REGULAR" deve ser uma INT LIST ou FLOAT LIST, entretanto est?? sendo retornado um "RED"%s"REGULAR"!\n", $3->return_type);
                semantic_errors++;
            } else if (!is_simple_type(param_symbol->type, param_symbol->type) && not_an_error(param_symbol->type)) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro da fun????o "RED"%s"REGULAR" deveria ser INT ou FLOAT, entretanto ?? "RED"%s"REGULAR"!\n", $1->token->content, param_symbol->type);
                semantic_errors++;
            } else if (is_int_list($3->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("int list");
            } else if (is_float_list($3->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("float list");
            }
        }
    }
    | relExp {
        $$ = $1;
    }
;

relExp:
    relExp RELOP sumExp {
        $$ = populate_node("Opera????o Relacional");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;
        free($$->return_type);
        $$->return_type = strdup("int");  

        if (is_simple_type($1->return_type, $3->return_type)) {            
            if (!is_same_type($1->return_type, $3->return_type) && is_float($1->return_type)) {
                $3->cast_to_float = 1;
            } else if (!is_same_type($1->return_type, $3->return_type) && is_float($3->return_type)) {
                $1->cast_to_float = 1;
            }         
        } else if ( (strcmp($2.content, "==") == 0) || (strcmp($2.content, "!=") == 0) ) {
            if ( !( ( is_nil($1->return_type) && is_int_list($3->return_type) ) || 
                    ( is_nil($1->return_type) && is_float_list($3->return_type) ) ||
                    ( is_int_list($1->return_type) && is_nil($3->return_type) ) ||
                    ( is_float_list($1->return_type) && is_nil($3->return_type) ) ||
                    ( is_nil($1->return_type) && is_nil($3->return_type) ) ) 
                ) {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" N??o ?? poss??vel realizar uma opera????o de "RED"%s"REGULAR" entre um "RED"%s"REGULAR" e um "RED"%s"REGULAR"! \n", $2.content, $1->return_type, $3->return_type);
                semantic_errors++;
                }
        } else {
                printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                printf(""RED"ERRO SEM??NTICO ---> "REGULAR" N??o ?? poss??vel realizar uma opera????o de "RED"%s"REGULAR" entre um "RED"%s"REGULAR" e um "RED"%s"REGULAR"! \n", $2.content, $1->return_type, $3->return_type);
                semantic_errors++; 
        }
    }
    | sumExp {
        $$ = $1;
    }
;

sumExp:
    sumExp SUMOP mulExp {
        $$ = populate_node("Opera????o de Soma");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;

        if (!not_an_error($1->return_type) || !not_an_error($3->return_type)) { 
            // para filtrar mensagens desnecess??rias
        } else if (!is_simple_type($1->return_type, $3->return_type) ) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??veis de uma soma devem ser do tipo INT ou FLOAT!\n");
            semantic_errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup($1->return_type);
        } else if (is_float($1->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $3->cast_to_float = 1;
        } else if (is_float($3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $1->cast_to_float = 1;
        }
    }
    | sumExp MINUS mulExp {
        $$ = populate_node("Opera????o de Subtra????o");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;

        if (!not_an_error($1->return_type) || !not_an_error($3->return_type)) { 
            // para filtrar mensagens desnecess??rias
        } else if (!is_simple_type($1->return_type, $3->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??veis de uma subtra????o devem ser do tipo INT ou FLOAT!\n");
            semantic_errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup($1->return_type);
        } else if (is_float($1->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $3->cast_to_float = 1;
        } else if (is_float($3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $1->cast_to_float = 1;
        } 
    }
    | mulExp {
       $$ = $1; 
    }
;

mulExp:
    mulExp MULOP unaryListExp {
        $$ = populate_node("Opera????o de Multiplica????o");
        $$->child_1 = $1;
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $2; 
        $$->child_2 = $3;

        if (!not_an_error($1->return_type) || !not_an_error($3->return_type)) { 
            // para filtrar mensagens desnecess??rias
        } else if (!is_simple_type($1->return_type, $3->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??veis de uma multiplica????o ou divis??o devem ser do tipo INT ou FLOAT!\n");
            semantic_errors++;            
        } else if (is_same_type($1->return_type, $3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup($1->return_type);
        } else if (is_float($1->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $3->cast_to_float = 1;
        } else if (is_float($3->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
            $1->cast_to_float = 1;
        }
    }
    | unaryListExp {
        $$ = $1;
    }
;

unaryListExp:
    UN_LISTOP unaryExp {
        $$ = populate_node("Opera????o Un??ria de Lista");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1; 
        $$->child_1 = $2;

        if (is_simple_type($2->return_type, $2->return_type)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operando "RED"%s"REGULAR" deve ser do tipo INT LIST ou FLOAT LIST!\n", $1.content);
            semantic_errors++;            
        } else if ((strcmp($1.content, "?") == 0)) {
            if (is_int_list($2->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("int");
            } else if (is_float_list($2->return_type)){
                free($$->return_type);
                $$->return_type = strdup("float");
            }
        } else if (strcmp($1.content, "%") == 0) {
            if (is_int_list($2->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("int list");
            } else if (is_float_list($2->return_type)){
                free($$->return_type);
                $$->return_type = strdup("float list");
            }
        }
    }
    | unaryLogExp {
        $$ = $1;
    }
;

unaryLogExp:
    EXCLAM unaryExp {

        if (is_int_list($2->return_type) || is_float_list($2->return_type) || is_nil($2->return_type)) {
            $$ = populate_node("Opera????o Un??ria de Lista");
            $$->token = (Token*) malloc(sizeof(Token));
            *$$->token = $1;
            $$->child_1 = $2;

            if (is_int_list($2->return_type)) {
                free($$->return_type);
                $$->return_type = strdup("int list");
            } else if (is_float_list($2->return_type)){
                free($$->return_type);
                $$->return_type = strdup("float list");
            }

        } else {
            $$ = populate_node("Opera????o L??gica Un??ria");
            $$->token = (Token*) malloc(sizeof(Token));
            *$$->token = $1; 
            $$->child_1 = $2;
            free($$->return_type);
            $$->return_type = strdup("int");
        }  
    }
    | unaryExp{
        $$ = $1;
    }
;

unaryExp:
    MINUS factor {
        $$ = populate_node("Express??o Aritm??tica Un??ria");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $2;

        if (!is_simple_type($2->return_type, $2->return_type) && not_an_error($2->return_type) ) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O operando deve ser do tipo INT ou FLOAT!\n");
            semantic_errors++;            
        } else if (is_int($2->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("int");
        } else if (is_float($2->return_type)) {
            free($$->return_type);
            $$->return_type = strdup("float");
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

        if (!symbol_exists(symbol_root, scope_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Vari??vel "RED"%s"REGULAR" n??o declarada!\n", $1.content);
            semantic_errors++;
        }

        $$ = populate_node("ID");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        free($$->return_type);
        $$->return_type = strdup(get_type(symbol_root, scope_root, scope_root, $1.content));
    }
;

call:
    ID {

        if (call_name) free(call_name);

        call_name = strdup($1.content);

        if (!symbol_exists(symbol_root, scope_root, scope_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" Fun????o "RED"%s"REGULAR" n??o declarada!\n", $1.content);
            semantic_errors++;
        } else if (!get_function(symbol_root, $1.content)) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O identificador "RED"%s"REGULAR" pertence a uma vari??vel, n??o uma fun????o!\n", $1.content);
            semantic_errors++;
        } else {
            functions_symbol = get_function(symbol_root, call_name);
            param_locations = 1;
        }

        function_call = 1;

    } '(' args ')' {

        if (get_function(symbol_root, $1.content)) {
            functions_symbol = get_function(symbol_root, $1.content);

            if (param_call != functions_symbol->param_qt){
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1.line, $1.column);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O n??mero de par??metros da chamada da fun????o ");
            printf(""RED"%s"REGULAR" tem "RED"%d"REGULAR" argumentos, entretanto ela deveria ter "RED"%d"REGULAR" argumentos\n", $1.content, param_call, functions_symbol->param_qt);
            semantic_errors++;
            }        
        }

        $$ = populate_node("Chamada de Fun????o"); 
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        $$->child_1 = $4;
        free($$->return_type);
        $$->return_type = strdup(get_type(symbol_root, scope_root, scope_root, $1.content));

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

        if (get_function(symbol_root, call_name)) {
            Symbol* param_symbol = get_param(functions_symbol, param_locations);
            param_locations++;
            if (!is_simple_type(param_symbol->type, $1->return_type) && not_an_error($1->return_type)) {
                if (strcmp(param_symbol->type, $1->return_type) != 0){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto na chamada est?? sendo passado um "RED"%s"REGULAR"\n", param_symbol->ID, param_symbol->type, $1->return_type);
                    semantic_errors++;
                }
            } else if ((!is_simple_type(param_symbol->type, param_symbol->type) || !is_simple_type($1->return_type, $1->return_type)) && not_an_error($1->return_type)) {
                if (strcmp(param_symbol->type, $1->return_type) != 0){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto na chamada est?? sendo passado um "RED"%s"REGULAR"\n", param_symbol->ID, param_symbol->type, $1->return_type);
                    semantic_errors++;
                }
            } else if (is_simple_type(param_symbol->type, $1->return_type)) {
                if (is_float(param_symbol->type) && is_int($1->return_type)){
                    $1->cast_to_float = 1;
                } else if (is_int(param_symbol->type) && is_float($1->return_type)){
                    $1->cast_to_int = 1;
                }
            }
        }

        $$ = populate_node("Lista de Argumentos");
        $$->child_1 = $1;
        $$->child_2 = $3;
        param_call++;
    }
    | logExp {

        if (get_function(symbol_root, call_name)) {
            Symbol* param_symbol = get_param(functions_symbol, param_locations);
            param_locations++;
            if (!is_simple_type(param_symbol->type, $1->return_type) && not_an_error($1->return_type)) {
                if (strcmp(param_symbol->type, $1->return_type) != 0){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto na chamada est?? sendo passado um "RED"%s"REGULAR"\n", param_symbol->ID, param_symbol->type, $1->return_type);
                    semantic_errors++;
                }
            } else if ((!is_simple_type(param_symbol->type, param_symbol->type) || !is_simple_type($1->return_type, $1->return_type)) && not_an_error($1->return_type)) {
                if (strcmp(param_symbol->type, $1->return_type) != 0){
                    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", $1->token->line, $1->token->column);
                    printf(""RED"ERRO SEM??NTICO ---> "REGULAR" O tipo do par??metro "RED"%s"REGULAR" ?? "RED"%s"REGULAR", entretanto na chamada est?? sendo passado um "RED"%s"REGULAR"\n", param_symbol->ID, param_symbol->type, $1->return_type);
                    semantic_errors++;
                }
            } else if (is_simple_type(param_symbol->type, $1->return_type)) {
                if (is_float(param_symbol->type) && is_int($1->return_type)){
                    $1->cast_to_float = 1;
                } else if (is_int(param_symbol->type) && is_float($1->return_type)){
                    $1->cast_to_int = 1;
                }
            }
        }

        $$ = $1;
        param_call++;
    }
;

constant:
    INT {
        $$ = populate_node("Int");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        free($$->return_type);
        $$->return_type = strdup("int"); 
    }
    | FLOAT {
        $$ = populate_node("Float");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        free($$->return_type);
        $$->return_type = strdup("float");
    }
    | NIL {
        $$ = populate_node("NIL");
        $$->token = (Token*) malloc(sizeof(Token));
        *$$->token = $1;
        free($$->return_type);
        $$->return_type = strdup("NIL");
    }
;

%%

extern void yyerror(const char* e) {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", prev_line, prev_column);
    printf(""RED"ERRO SINT??TICO ---> "REGULAR"%s\n", e);
    lex_sint_errors++;
}  

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    argc++;
    if(yyin){
        yyparse();
        if (!symbol_exists(symbol_root, scope_root, scope_root, "main")) {
            printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", 0, 0);
            printf(""RED"ERRO SEM??NTICO ---> "REGULAR" A fun????o "RED"main"REGULAR" n??o foi declarada!\n");
            semantic_errors++;
        }
        if (lex_sint_errors == 0) {
            printf("\n");
            print_node(abstract_tree, 1);
            print_table_header();
            for (int i = 0; i < position; i++) { 
                print_symbol(symbol_root);
                popSymbol(&symbol_root);
            }
            pop_scope(&scope_root);
            if (semantic_errors) printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros sem??nticos no arquivo!\n", semantic_errors);
        } else {
            printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros no arquivo. A ??rvore abstrata n??o ser?? mostrada caso haja erros l??xicos ou sint??ticos!\n\n", lex_sint_errors + semantic_errors);
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
        printf("Argumento inv??lido ou inexistente. Tenha certeza que o caminho do arquivo passado como argumento est?? certo!\n");
        exit(0);
    }
    if (function_type) free(function_type);
    if (function_name) free(function_name);
    if (call_name) free(call_name);
    fclose(yyin);
    yylex_destroy();
    return 0;
}

