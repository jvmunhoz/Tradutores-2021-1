#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "abstract_tree.h"
#include "symbol_table.h"
#include "scope_stack.h"
#include "../src/C_IPL_Syntax.tab.h"

extern StackNode* populate_stack(int scope) {
    int stack_size = sizeof(StackNode);

    StackNode* stackNode = (StackNode*) malloc(stack_size);
    stackNode->scope = scope;
    stackNode->next_scope = NULL;
    return stackNode;
}
 
int is_empty_scope(StackNode* scope_root) {
    return !scope_root;
}
 
extern void push_scope(StackNode** scope_root, int scope) {
    StackNode* stackNode = populate_stack(scope);

    stackNode->next_scope = *scope_root;
    *scope_root = stackNode;
}
 
extern void pop_scope(StackNode** scope_root) {
    if (is_empty_scope(*scope_root)) return;

    StackNode* scope_root2 = *scope_root;

    *scope_root = (*scope_root)->next_scope;

    free(scope_root2);
    return;
}
 
extern int peek_scope(StackNode* scope_root) {
    if (is_empty_scope(scope_root)) return INT_MIN;
    return scope_root->scope;
}