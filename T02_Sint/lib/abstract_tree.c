#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "abstract_tree.h"

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
