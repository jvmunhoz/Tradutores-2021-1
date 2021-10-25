#ifndef TAC_H
#define TAC_H

#include <stdio.h>
#include "abstract_tree.h"
#include "scope_stack.h"
#include "symbol_table.h"
#include "../src/C_IPL_Syntax.tab.h"

extern void compile_file(char* filename);

#endif