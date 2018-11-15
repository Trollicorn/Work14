#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

<<<<<<< HEAD
char ** parse_args(char * line) {
    
    char **arr = malloc(6 * sizeof(char *));
    
    char *new_line = malloc(strlen(line));
    strcpy(new_line, line);
    
    for (int i = 0; new_line; i++) {
        arr[i] = strsep(&new_line," ");
    }
    
    return arr;
=======
char ** parse_args(char * line){
  char ** arr = malloc(100);                //sizeof(*line)); idk why it doesnt work, replace later
//  printf("it good\n");
  for (int i = 0; strlen(line); i++){
    arr[i] = strsep(&line," ");
  //  printf("%s\n",arr[i]);
  }
  return arr;
>>>>>>> 263a4d7a49ce683e6dab9ab1d030cf9d389e8f0b
}

int main(int argc, char * argv[]) {
    
    char **args = parse_args(argv[1]);
    execvp(args[0],args);
    
    return 0;
}
