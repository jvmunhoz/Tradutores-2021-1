#ifndef SCOPE_STACK_H
#define SCOPE_STACK_H

typedef struct StackNode {
    int scope;
    struct StackNode* next_scope;
} StackNode;

extern StackNode* populate_stack(int scope);

extern void push(StackNode** root, int scope);

extern void pop(StackNode** root);

extern int peek(StackNode* root);

extern int scope;

extern StackNode* root;

#endif