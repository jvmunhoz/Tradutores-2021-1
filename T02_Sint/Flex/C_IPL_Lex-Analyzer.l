%option noinput nounput
%option noyywrap
%x IN_COMMENT
%x STRING
%{
    #include <stdio.h>
    #include <stdlib.h>
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    void unclosed_comment();
    void print_token(char token_name[]);
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

STRING      \"(\\.|[^"\\])*\"

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
    print_token("Tipo");
    return TYPE;
}

{DIGIT}+ {
    print_token("Constante Int");
    return INT;
}

{DIGIT}+"."{DIGIT}+ {
    print_token("Constante Float");
    return FLOAT;
}

{NIL} {
    print_token("Constante NIL");
    return NIL;
}

{MINUS} {
    print_token("Símbolo de Menos");
    return MINUS;
}

{SUMOP} {
    print_token("Operação de Soma");
    return SUMOP;
}

{MULOP} {
    print_token("Operação de Multiplicação");
    return MULOP;
}

{EXCLAM} {
    print_token("Símbolo de Exclamação");
    return EXCLAM;
}

{LOGOP} {
    print_token("Operação Lógica");
    return LOGOP;
}

{RELOP} {
    print_token("Operação Relacional");
    return RELOP;
}

{ASSIGN} {
    print_token("Atribuição");
    return ASSIGN;
}

{IF} {
    print_token("Keyword if");
    return KW_IF;
}

{ELSE} {
    print_token("Keyword else");
    return KW_ELSE;
}

{FOR} {
    print_token("Keyword for");
    return KW_FOR;
}

{RETURN} {
    print_token("Keyword return");
    return KW_RETURN;
}

{READ} {
    print_token("Operação de Leitura");
    return READ;
}

{WRITE} {
    print_token("Operação de Escrita");
    return WRITE;
}

{STRING} {
    print_token("String");
    return STRING;
}

{UN_LISTOP} {
    print_token("Operação Unária de Listas");
    return UN_LISTOP;
}

{BIN_LISTOP} {
    print_token("Operação Binária de Listas");
    return BIN_LISTOP;
}

{COMMENT} {
    // Do nothing
}

{ID} {
    print_token("ID");
    return ID;
}

"\"" {
    BEGIN(STRING);
}

"/*" {
    comment_line = yylineno;
    BEGIN(IN_COMMENT);
}

";" {
    print_token("Ponto e vírgula");
    return ';';
}

"(" {
    print_token("Abre parêntesis");
    return '(';
}

")" {
    print_token("Fecha parêntesis");
    return ')';
}

"{" {
    print_token("Abre chaves");
    return '{';
}

"}" {
    print_token("Fecha chaves");
    return '}';
}

"," {
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

<STRING>{           
"\""            BEGIN(INITIAL);
[^\"\n]*        // eat string in chunks
\n              unclosed_string();
<<EOF>>         {unclosed_string(); yyterminate();}
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
    BEGIN(INITIAL);
}

void print_token(char token_name[]) {
    printf("|Linha: "GREEN"%d"REGULAR"\t|Coluna: "GREEN"%d"REGULAR"\t| ", yylineno, column);
    printf("%s: "BLUE"%s"REGULAR"\n", token_name, yytext);
    column += yyleng;
}
