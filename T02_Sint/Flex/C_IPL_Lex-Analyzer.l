%option noinput nounput
%option noyywrap
%x IN_COMMENT
%{
    #include "../lib/abstract_tree.h"
    #include "../Bison/C_IPL_Syntax.tab.h"
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
%}

DIGIT       [0-9]

LIST_TYPE   list

TYPE        int|float

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
    print_token("Tipo"); 
    return TYPE;
}

{LIST_TYPE} {
    process_token();
    print_token("Lista");
    return LIST_TYPE;
}

{DIGIT}+ {
    process_token();
    print_token("Constante Int");
    return INT;
}

{DIGIT}+"."{DIGIT}+ {
    process_token();
    print_token("Constante Float");
    return FLOAT;
}

{NIL} {
    process_token();
    print_token("Constante NIL");
    return NIL;
}

{MINUS} {
    process_token();
    print_token("Símbolo de Menos");
    return MINUS;
}

{SUMOP} {
    process_token();
    print_token("Operação de Soma");
    return SUMOP;
}

{MULOP} {
    process_token();
    print_token("Operação de Multiplicação");
    return MULOP;
}

{EXCLAM} {
    process_token();
    print_token("Símbolo de Exclamação");
    return EXCLAM;
}

{LOGOP} {
    process_token();
    print_token("Operação Lógica");
    return LOGOP;
}

{RELOP} {
    process_token();
    print_token("Operação Relacional");
    return RELOP;
}

{ASSIGN} {
    process_token();
    print_token("Atribuição");
    return ASSIGN;
}

{IF} {
    process_token();
    print_token("Keyword if");
    return KW_IF;
}

{ELSE} {
    process_token();
    print_token("Keyword else");
    return KW_ELSE;
}

{FOR} {
    process_token();
    print_token("Keyword for");
    return KW_FOR;
}

{RETURN} {
    process_token();
    print_token("Keyword return");
    return KW_RETURN;
}

{READ} {
    process_token();
    print_token("Operação de Leitura");
    return READ;
}

{WRITE} {
    process_token();
    print_token("Operação de Escrita");
    return WRITE;
}

{STRING} {
    process_token();
    print_token("String");
    return STRING;
}

{MLSTRING} {
    unclosed_string();
}

{UN_LISTOP} {
    process_token();
    print_token("Operação Unária de Listas");
    return UN_LISTOP;
}

{BIN_LISTOP} {
    process_token();
    print_token("Operação Binária de Listas");
    return BIN_LISTOP;
}

{COMMENT} {
    // Do nothing
}

{ID} {
    process_token();
    print_token("ID");
    return ID;
}

"/*" {
    process_token();
    comment_line = yylineno;
    BEGIN(IN_COMMENT);
}

";" {
    process_token();
    print_token("Ponto e vírgula");
    return ';';
}

"(" {
    process_token();
    print_token("Abre parêntesis");
    return '(';
}

")" {
    process_token();
    print_token("Fecha parêntesis");
    return ')';
}

"{" {
    process_token();
    print_token("Abre chaves");
    return '{';
}

"}" {
    process_token();
    print_token("Fecha chaves");
    return '}';
}

"," {
    process_token();
    print_token("Vírgula");
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

void print_token(char token_name[]) {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", yylineno, column);
    printf("%s: "BLUE"%s"REGULAR"\n", token_name, yytext);
    column += yyleng;
}

void process_token() {
    int input_size = (strlen(yytext) + 1) * sizeof(char);

    yylval.token.line = yylineno;
    yylval.token.column = column;
    yylval.token.scope = 0; //temporary
    yylval.token.content = (char*) malloc(input_size);
    strcpy(yylval.token.content, yytext);
}