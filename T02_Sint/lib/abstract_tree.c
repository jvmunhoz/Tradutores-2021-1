#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abstract_tree.h"
#include "../lib/abstract_tree.h"
#define BLUE "\033[1;34:40m"
#define RED "\033[1;31:40m"
#define GREEN "\033[1;32:40m"
#define MAGENTA "\033[1;35:40m"
#define CYAN "\033[1;36:40m"
#define YELLOW "\033[1;33:40m"
#define REGULAR "\033[0m"

extern Node* populate_node (char* identifier) {
    int node_size = (sizeof(Node));
    int str_size = (strlen(identifier) + 1) * sizeof(char);
    
    Node* node = (Node*) malloc(node_size);
    node->identifier = (char*) malloc(str_size);
     
    strcpy(node->identifier, identifier);
    node->child_1 = NULL;
    node->child_2 = NULL;
    node->child_3 = NULL;
    node->child_4 = NULL;
    node->token = NULL;

    return node;
}

extern void print_node(Node* tree_node, int nivel) {
    if (tree_node == NULL) return;

    int count = 0;

    for (int i = 0; i < nivel; i++) printf("-");

    if (nivel % 4 == 0) {
        printf(BLUE"%s"REGULAR, tree_node->identifier);        
    } else if (nivel % 4 == 1) {
        printf(MAGENTA"%s"REGULAR, tree_node->identifier);
    } else if (nivel % 4 == 2) {
        printf(CYAN"%s"REGULAR, tree_node->identifier);
    } else if (nivel % 4 == 3) {
        printf(YELLOW"%s"REGULAR, tree_node->identifier);
    } 
    

    if (tree_node->token != NULL) printf(":"GREEN" %s"REGULAR, tree_node->token->content);
    printf("\n");

    print_node(tree_node->child_1, nivel + 1);
    print_node(tree_node->child_2, nivel + 1);
    print_node(tree_node->child_3, nivel + 1);
    print_node(tree_node->child_4, nivel + 1);
}
