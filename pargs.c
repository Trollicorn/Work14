#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char * arr[5];
  for (int i = 0; line; i++){
    arr[i] = strsep(line," ");
  }
}


int main(int argc, char * argv[]){
  char ** args = parse_args(argv[1]);
  execvp(args[0],args);
  return 0;
}
