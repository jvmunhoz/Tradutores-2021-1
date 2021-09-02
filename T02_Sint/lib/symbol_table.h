#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "abstract_tree.h"
#include "../Bison/C_IPL_Syntax.tab.h"

typedef struct Symbol {
        int line;
        int column;
        int scope;
        char* ID;
        char* type;
        int is_function;
} Symbol;

extern Symbol* populate_symbol_table (
    int line, 
    int column,
    int scope,
    char* ID, 
    char* type, 
    int is_function
);

extern void print_symbol(Symbol* symbol);
extern void print_table_header();

#endif