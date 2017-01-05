//
// built_ins.c
//
// A program to show how build in macros can be used
//
#include <stdio.h>

#define print_position() printf("I am at %s, function %s, line %d\n", __FILE__, __func__, __LINE__)

void simple_function_call(){
  print_position();
}

int main(void){
  print_position();
  simple_function_call();

  printf("Also it was compiled on %s at %s and its version is %ld\n", __DATE__, __TIME__, __STDC_VERSION__);
}
