#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "abstract_tree.h"
#include "symbol_table.h"
#include "../Bison/C_IPL_Syntax.tab.h"
#define BLUE "\033[1;34:40m"
#define RED "\033[1;31:40m"
#define GREEN "\033[1;32:40m"
#define MAGENTA "\033[1;35:40m"
#define CYAN "\033[1;36:40m"
#define YELLOW "\033[1;33:40m"
#define REGULAR "\033[0m"

extern Symbol* populate_symbol_table (
    int line, int column, int scope, char* ID, char* type, int is_function
    ) {
    int symbol_size = (sizeof(Symbol));
    int str_size = (strlen(ID) + 1) * sizeof(char);
    int str_size_2 = (strlen(type) + 1) * sizeof(char);
    
    Symbol* symbol = (Symbol*) malloc(symbol_size);
    symbol->ID = (char*) malloc(str_size);
    symbol->type = (char*) malloc(str_size_2);
     
    symbol->line = line;
    symbol->column = column;
    symbol->scope = scope;
    strcpy(symbol->ID, ID);
    strcpy(symbol->type, type);
    symbol->is_function = is_function;

    return symbol;
}

extern void print_table_header() {
    printf("\n");
    printf("##########################################################################################\n");
    printf("#                                                                                        #\n");
    printf("#                                   TABELA DE SÍMBOLOS                                   #\n");
    printf("#                                                                                        #\n");
    printf("##########################################################################################\n");
    printf("#             ID             | Escopo | Linha | Coluna |    Tipo    | Função ou Variável #\n");
    printf("##########################################################################################\n");
}

extern void print_symbol(Symbol* symbol) {

    if (symbol->is_function == 1) {

    printf("#"MAGENTA"%28s"REGULAR"|"CYAN"%8d"REGULAR"|"GREEN"%7d"REGULAR"|"GREEN"%8d"REGULAR"|%12s|        Função      #\n", symbol->ID, symbol->scope, symbol->line, symbol->column, symbol->type);
    } else {
    printf("#"MAGENTA"%28s"REGULAR"|"CYAN"%8d"REGULAR"|"GREEN"%7d"REGULAR"|"GREEN"%8d"REGULAR"|%12s|       Variável     #\n", symbol->ID, symbol->scope, symbol->line, symbol->column, symbol->type);
    }

    printf("##########################################################################################\n");
}