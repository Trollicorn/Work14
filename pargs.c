#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char ** arr = malloc(100);                //sizeof(*line)); idk why it doesnt work, replace later
  printf("it good\n");
  strcpy(oof,line);
  for (int i = 0; oof; i++){
    arr[i] = strsep(&oof," ");
    printf("%s\n",arr[i]);
  }
}


int main(int argc, char * argv[]){
  char ** args = parse_args(argv[1]);
  execvp(args[0],args);
  return 0;
}
