#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char * arr[5];
  for (int i = 0; line; i++){
    arr[i] = strpsep(line," ");
  }
}


int main(){
  char a[] = "eee ee e";

  printf("%s\n",parse_args );
}
