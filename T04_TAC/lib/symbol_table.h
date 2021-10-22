#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include "abstract_tree.h"
#include "scope_stack.h"
#include "../src/C_IPL_Syntax.tab.h"

typedef struct Symbol {
        int line;
        int column;
        int scope;
        char* ID;
        char* type;
        int is_function;
        int param_qt;
        char* default_return;
        struct Symbol* next_symbol;
} Symbol;

extern void pushSymbol(Symbol** symbol_root, int line, int column, int scope, char* ID, char* type, int is_function, int param_qt, char* default_return);

extern void popSymbol(Symbol** symbol_root);

extern int symbol_exists(Symbol* symbol_root, StackNode* scope_root, StackNode* scope_root_copy, char* name);

extern int is_repeated(Symbol* symbol_root, int current_scope, char* name);

extern char* get_type(Symbol* symbol_root, StackNode* scope_root, StackNode* scope_root_copy, char* name);

extern Symbol* get_function(Symbol* symbol_root, char* name);

extern int param_location(Symbol* symbol_root, int return_value);

extern Symbol* get_param(Symbol* symbol_root, int param_location);

extern int symbol_int(Symbol* symbol_root, StackNode* scope_root, char* name);

extern int symbol_float(Symbol* symbol_root, StackNode* scope_root, char* name);

extern int symbol_int_list(Symbol* symbol_root, StackNode* scope_root, char* name);

extern int symbol_float_list(Symbol* symbol_root, StackNode* scope_root, char* name);

extern void print_symbol(Symbol* symbol);

extern void print_table_header();

#endif