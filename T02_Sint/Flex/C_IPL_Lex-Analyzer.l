%option noinput nounput
%option noyywrap
%x IN_COMMENT
%{
    #include "../lib/abstract_tree.h"
    #include "../lib/symbol_table.h"
    #include "../Bison/C_IPL_Syntax.tab.h"
    #include "../lib/scope_stack.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    void unclosed_comment();
    void print_token(char token_name[]);
    void process_token();
    void unclosed_string();
    int column = 1;
    int errors = 0;
    int comment_line = 0;
    int first_time = 0;
%}

DIGIT       [0-9]

TYPE        int|float|"int list"|"float list"

NIL         (NIL)

MINUS       [-]

SUMOP       [+]

MULOP       [*/]

EXCLAM      [!]

LOGOP       (&&)|(\|\|)

RELOP       [<]|(<=)|[>]|(>=)|(==)|(!=)

ASSIGN      [=]

IF          if

ELSE        else

FOR         for

RETURN      return

READ        read

WRITE       write|writeln

STRING      \"[^\"\n]*\"

MLSTRING    \"[^\"\n]*

COMMENT     (\/\/).*

UN_LISTOP   [?%]

BIN_LISTOP  [:]|(>>)|(<<)

ID          [A-Za-z_][A-Za-z0-9_]*

%%

[ \t]+ {
    column += yyleng;
}

\n {
    yylineno++;
    column = 1;
}

{TYPE} {
    process_token();
    return TYPE;
}

{DIGIT}+ {
    process_token();
    return INT;
}

{DIGIT}+"."{DIGIT}+ {
    process_token();
    return FLOAT;
}

{NIL} {
    process_token();
    return NIL;
}

{MINUS} {
    process_token();
    return MINUS;
}

{SUMOP} {
    process_token();
    return SUMOP;
}

{MULOP} {
    process_token();
    return MULOP;
}

{EXCLAM} {
    process_token();
    return EXCLAM;
}

{LOGOP} {
    process_token();
    return LOGOP;
}

{RELOP} {
    process_token();
    return RELOP;
}

{ASSIGN} {
    process_token();
    return ASSIGN;
}

{IF} {
    process_token();
    return KW_IF;
}

{ELSE} {
    process_token();
    return KW_ELSE;
}

{FOR} {
    process_token();
    return KW_FOR;
}

{RETURN} {
    process_token();
    return KW_RETURN;
}

{READ} {
    process_token();
    return READ;
}

{WRITE} {
    process_token();
    return WRITE;
}

{STRING} {
    process_token();
    return STRING;
}

{MLSTRING} {
    unclosed_string();
}

{UN_LISTOP} {
    process_token();
    return UN_LISTOP;
}

{BIN_LISTOP} {
    process_token();
    return BIN_LISTOP;
}

{COMMENT} {
    // Do nothing
}

{ID} {
    process_token();
    return ID;
}

"/*" {
    comment_line = yylineno;
    BEGIN(IN_COMMENT);
}

";" {
    process_token();
    return ';';
}

"(" {
    process_token();
    return '(';
}

")" {
    process_token();
    return ')';
}

"{" {
    process_token();
    scope++;
    push(&root, scope);
    return '{';
}

"}" {
    process_token();
    pop(&root);
    return '}';
}

"," {
    process_token();
    return ',';
}

. {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", yylineno, column);
    printf(""RED"ERRO LÉXICO ---> "REGULAR"");
    printf("O padrão "RED"%s"REGULAR" não é reconhecido pela gramática\n", yytext);
    column += yyleng;
    errors++;
}

<IN_COMMENT>{
"*/"            BEGIN(INITIAL);
[^*\n]+         // eat comment in chunks
"*"             // eat the lone star
\n              yylineno++;
<<EOF>>         {unclosed_comment(); yyterminate();}
}

%%

void unclosed_comment() {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", comment_line, column);
    printf(""RED"ERRO LÉXICO ---> "REGULAR"");
    printf("Um comentário iniciado nessa linha chegou até o EOF e não foi fechado!\n");
    errors++;
}

void unclosed_string() {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", yylineno, column);
    printf(""RED"ERRO LÉXICO ---> "REGULAR"");
    printf("Uma string iniciada nessa linha chegou até uma quebra de linha ou ao final do arquivo e não foi fechada!\n");
    errors++;
    yylineno++;
}

void process_token() {

    if (scope == 0 && first_time == 0) {
        push(&root, scope);
        first_time++;
    }

    int input_size = (strlen(yytext) + 1) * sizeof(char);

    yylval.token.line = yylineno;
    yylval.token.column = column;
    yylval.token.scope = peek(root);
    yylval.token.content = (char*) malloc(input_size);
    strcpy(yylval.token.content, yytext);

    column += yyleng;
}