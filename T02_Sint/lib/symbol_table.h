#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "abstract_tree.h"
#include "../src/C_IPL_Syntax.tab.h"

typedef struct Symbol {
        int line;
        int column;
        int scope;
        char* ID;
        char* type;
        int is_function;
        struct Symbol* next_symbol;
} Symbol;

extern void pushSymbol(Symbol** symbol_root, int line, int column, int scope, char* ID, char* type, int is_function);

extern void popSymbol(Symbol** symbol_root);

extern void print_symbol(Symbol* symbol);
extern void print_table_header();

#endif