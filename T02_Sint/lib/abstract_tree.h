#ifndef ABSTRACT_TREE_H
#define ABSTRACT_TREE_H

typedef struct Token {
        int line;
        int column;
        int scope;
        char* content;
} Token; 

typedef struct Node {
    char*  identifier;
    struct Node*  child_1;
    struct Node*  child_2;
    struct Node*  child_3;
    struct Node*  child_4;
    Token* token;
} Node;

extern Node* populate_node (char* identifier);
extern void print_node(Node* tree_node, int nivel);

#endif