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
    node->cast_to_int = 0;
    node->cast_to_float = 0;

    int return_size = (strlen("undefined") + 1) * sizeof(char);
    node->return_type = (char*) malloc(sizeof(return_size));
    strcpy(node->return_type, "undefined");

    return node;
}

extern int is_same_type (char* type1, char* type2) {
    if (strcmp(type1, type2) == 0) {
        return 1;
    }
    return 0;
}

extern int is_simple_type (char* type1, char* type2) {
    if ( ( (strcmp(type1, "int") != 0) && (strcmp(type1, "float") != 0) ) || ( (strcmp(type2, "int") != 0) && (strcmp(type2, "float") != 0) ) ) {
        return 0;
    }
    return 1;
}

extern int not_an_error (char* type) {
    if ((strcmp(type, "undefined") != 0) && (strcmp(type, "error") != 0)) {
        return 1;
    }
    return 0;
}

extern int is_int (char* type) {
    if ( strcmp(type, "int") == 0 ) {
        return 1;
    }
    return 0;
}

extern int is_float (char* type) {
    if ( strcmp(type, "float") == 0 ) {
        return 1;
    }
    return 0;
}

extern int is_int_list (char* type) {
    if ( strcmp(type, "int list") == 0 ) {
        return 1;
    }
    return 0;
}

extern int is_float_list (char* type) {
    if ( strcmp(type, "float list") == 0 ) {
        return 1;
    }
    return 0;
}

extern int is_nil (char* type) {
    if ( strcmp(type, "NIL") == 0 ) {
        return 1;
    }
    return 0;
}

extern void print_node(Node* tree_node, int nivel) {
    if (tree_node == NULL) {
        free(tree_node);
        return;    
    }

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
    

    if (tree_node->token != NULL) {
        printf(":"GREEN" %s  "REGULAR, tree_node->token->content);
    }

    if ((strcmp(tree_node->return_type, "undefined") != 0) && (strcmp(tree_node->return_type, "error") != 0)) {
        printf(""RED"[ TYPE: %s ]  "REGULAR"", tree_node->return_type);
    }

    if (tree_node->cast_to_int) {
        printf(""BLUE"< CAST_TO_INT >"REGULAR"");
    }

    if (tree_node->cast_to_float) {
        printf(""BLUE"< CAST_TO_FLOAT >"REGULAR"");
    }

    printf("\n");

    print_node(tree_node->child_1, nivel + 1);
    print_node(tree_node->child_2, nivel + 1);
    print_node(tree_node->child_3, nivel + 1);
    print_node(tree_node->child_4, nivel + 1);

    free(tree_node->identifier);
    if (tree_node->token) {
        free(tree_node->token->content);
    }
    free(tree_node->token);
    free(tree_node->return_type);
    free(tree_node);
}
