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

TYPE        int|float|list

NIL         (NIL)

MINUS       [-]

SUMOP       [+]

MULOP       [*/]

EXCLAM      [!]

LOGOP       (&&)|(\|\|)

RELOP       [<]|(<=)|[>]|(>=)|(==)|(!=)

ASSIGN      [=]

KEYWORDS    if|else|for|return

READWRITE   read|write|writeln

STRING      \"(\\.|[^"\\])*\"

COMMENT     (\/\/).*

LISTOP      [:?%]|(>>)|(<<)

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
}

{DIGIT}+ {
    print_token("Constante Int");
}

{DIGIT}+"."{DIGIT}+ {
    print_token("Constante Float");
}

{NIL} {
    print_token("Constante NIL");
}

{MINUS} {
    print_token("Símbolo de Menos");
}

{SUMOP} {
    print_token("Operação de Soma");
}

{MULOP} {
    print_token("Operação de Multiplicação");
}

{EXCLAM} {
    print_token("Símbolo de Exclamação");
}

{LOGOP} {
    print_token("Operação Lógica");
}

{RELOP} {
    print_token("Operação Relacional");
}

{ASSIGN} {
    print_token("Atribuição");
}

{KEYWORDS} {
    print_token("Keyword");
}

{READWRITE} {
    print_token("I/O");
}

{STRING} {
    print_token("String");
}

{LISTOP} {
    print_token("Operação de Listas");
}

{COMMENT} {
    // Do nothing
}

{ID} {
    print_token("ID");
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
}

"(" {
    print_token("Abre parêntesis");
}

")" {
    print_token("Fecha parêntesis");
}

"{" {
    print_token("Abre chaves");
}

"}" {
    print_token("Fecha chaves");
}

"," {
    print_token("Vírgula");
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

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    if(yyin){
        yylex();
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
