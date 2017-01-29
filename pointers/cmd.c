//
// cmd.c
//
// A program to demonstrate use of
// command line arguments.
//
#include <stdio.h>

int main(int argc, char* argv[]){
  printf("Your program name is '%s' ", argv[0]); 
  if(argc > 1){
    printf("with argument(s):\n");
    
    for(int i = 1; i < argc; i++){
      printf("\t%d) %s\n", i, argv[i]);
    }
  }else {
    printf("You have specified no arguments\n");
  }

  return 0;
}
