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
    char*  return_type;
    int cast_to_int;
    int cast_to_float;
} Node;

extern Node* populate_node (char* identifier);
extern int is_same_type (char* type1, char* type2);
extern int is_simple_type (char* type1, char* type2);
extern int not_an_error (char* type);
extern int is_int (char* type);
extern int is_float (char* type);
extern int is_int_list (char* type);
extern int is_float_list (char* type);
extern int is_nil (char* type);
extern void print_node(Node* tree_node, int nivel);

#endif