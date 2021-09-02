#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "abstract_tree.h"
#include "symbol_table.h"
#include "scope_stack.h"
#include "../Bison/C_IPL_Syntax.tab.h"

extern StackNode* populate_stack(int scope) {
    int stack_size = sizeof(StackNode);

    StackNode* stackNode = (StackNode*) malloc(stack_size);
    stackNode->scope = scope;
    stackNode->next_scope = NULL;
    return stackNode;
}
 
int isEmpty(StackNode* root) {
    return !root;
}
 
extern void push(StackNode** root, int scope) {
    StackNode* stackNode = populate_stack(scope);

    stackNode->next_scope = *root;
    *root = stackNode;
}
 
extern void pop(StackNode** root) {
    if (isEmpty(*root)) return;

    *root = (*root)->next_scope;
    return;
}
 
extern int peek(StackNode* root) {
    if (isEmpty(root)) return INT_MIN;
    return root->scope;
}