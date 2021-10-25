#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tac.h"
#include "abstract_tree.h"
#include "symbol_table.h"
#include "scope_stack.h"
#include "../src/C_IPL_Syntax.tab.h"

void strip_ext(char *fname)
{
    char *end = fname + strlen(fname);

    while (end > fname && *end != '.' && *end != '\\' && *end != '/') {
        --end;
    }
    if ((end > fname && *end == '.') &&
        (*(end - 1) != '\\' && *(end - 1) != '/')) {
        *end = '\0';
    }  
}

extern void compile_file(char* filename) {

    char ch;
    const char* extension = ".tac";
    char* name_with_extension;

    strip_ext(filename);
    
    name_with_extension = malloc(strlen(filename)+1+4);
    strcpy(name_with_extension, filename);
    strcat(name_with_extension, extension);

    FILE *tac_file = fopen(name_with_extension, "w+");
    FILE *table_file = fopen("table.tac", "r");
    FILE *code_file = fopen("code.tac", "r");

    while((ch = fgetc(table_file)) != EOF) {
        fputc(ch,tac_file);
    }
 
    while((ch = fgetc(code_file)) != EOF) {
        fputc(ch,tac_file);
    }

    free(name_with_extension);
    fclose(tac_file);
    fclose(table_file);
    fclose(code_file);
}