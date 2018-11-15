#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line) {
    
    char **arr = malloc(6 * sizeof(char *));
    
    char *new_line = malloc(strlen(line));
    strcpy(new_line, line);
    
    for (int i = 0; new_line; i++) {
        arr[i] = strsep(&new_line," ");
    }
    
    return arr;
}

int main(int argc, char * argv[]) {
    
    char **args = parse_args(argv[1]);
    execvp(args[0],args);
    
    return 0;
}
