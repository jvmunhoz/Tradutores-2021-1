#ifndef SCOPE_STACK_H
#define SCOPE_STACK_H

typedef struct StackNode {
    int scope;
    struct StackNode* next_scope;
} StackNode;

extern StackNode* populate_stack(int scope);

extern void push_scope(StackNode** scope_root, int scope);

extern void pop_scope(StackNode** scope_root);

extern int peek_scope(StackNode* scope_root);

extern int scope;

extern StackNode* scope_root;

#endif