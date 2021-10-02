#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "abstract_tree.h"
#include "symbol_table.h"
#include "scope_stack.h"
#include "../src/C_IPL_Syntax.tab.h"
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
    symbol->next_symbol = NULL;

    return symbol;
}

int is_empty_symbol(Symbol* symbol_root) {
    return !symbol_root;
}
 
extern void pushSymbol(Symbol** symbol_root, int line, int column, int scope, char* ID, char* type, int is_function) {
    Symbol* symbol = populate_symbol_table(line, column, scope, ID, type, is_function);

    symbol->next_symbol = *symbol_root;
    *symbol_root = symbol;
}
 
extern void popSymbol(Symbol** symbol_root) {
    if (is_empty_symbol(*symbol_root)) return;

    Symbol* symbol_root2 = *symbol_root;

    *symbol_root = (*symbol_root)->next_symbol;

    free(symbol_root2->ID);
    free(symbol_root2->type);
    free(symbol_root2);
    return;
}

extern int symbol_exists(Symbol* symbol_root, StackNode* scope_root, char* name) {
    if (is_empty_symbol(symbol_root)) return 0;

    if (symbol_root->scope > peek_scope(scope_root)) {
        return symbol_exists(symbol_root->next_symbol, scope_root, name);
    } else if (symbol_root->scope < peek_scope(scope_root)) {
        return symbol_exists(symbol_root, scope_root->next_scope, name);
    }

    if (strcmp(symbol_root->ID, name) != 0) {
        return symbol_exists(symbol_root->next_symbol, scope_root, name);
    }

    if (strcmp(symbol_root->ID, name) == 0) {
        return 1;
    }

    return 0;
}

extern int is_repeated(Symbol* symbol_root, int current_scope, char* name) {
    if (is_empty_symbol(symbol_root)) return 0;

    if (symbol_root->scope != current_scope) {
        return is_repeated(symbol_root->next_symbol, current_scope, name);
    }

    if (strcmp(symbol_root->ID, name) != 0) {
        return is_repeated(symbol_root->next_symbol, current_scope, name);
    }

    if ((strcmp(symbol_root->ID, name) == 0)) {
        return 1;
    }

    return 0;
}

extern char* get_type(Symbol* symbol_root, StackNode* scope_root, char* name) {
    
    if (symbol_root->scope > peek_scope(scope_root)) {
        return get_type(symbol_root->next_symbol, scope_root, name);
    } else if (symbol_root->scope < peek_scope(scope_root)) {
        return get_type(symbol_root, scope_root->next_scope, name);
    }

    if (strcmp(symbol_root->ID, name) != 0) {
        return get_type(symbol_root->next_symbol, scope_root, name);
    }

    if (strcmp(symbol_root->ID, name) == 0) {
        return symbol_root->type;
    }

    return symbol_root->type;
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