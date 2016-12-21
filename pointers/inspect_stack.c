//
// inspect_stack.c
// A program to inspect memory on stack
//
#include <stdio.h>

int extern_var;

void func(void){
  int x;
  printf("Inside a function: %p\n", &x);
}

int main(void){
  int x;
  int y;
  char c;
  long l;

  printf("%p, %p, %p, %p\n", &x, &y, &c, &l);
  func();
  func();
  printf("External variable = %p\n", &extern_var);
  
  return 0;
}
