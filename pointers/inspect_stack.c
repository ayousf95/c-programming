//
// inspect_stack.c
// A program to inspect memory on stack
//
#include <stdio.h>

int extern_var;

void func(void){
  int x;
  printf("Inside a function: %d\n", (int)&x);
}

int main(void){
  int x;
  int y;
  char c;
  long l;

  printf("%d, %d, %d, %d\n", (int)&x, (int)&y, (int)&c, (int)&l);
  func();
  func();
  printf("External variable = %d\n", (int)&extern_var);
  
  return 0;
}
