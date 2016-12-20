//
// indirection.c
// A program to show how pointers can be used
// to change values of variables
//

#include <stdio.h>

int main(void){
  int x = 10;
  int *pointer_to_x;

  pointer_to_x = &x;

  printf("Address of x is %p\n", pointer_to_x);
  printf("Value at address where pointer is pointing is %d\n", *pointer_to_x);

  *pointer_to_x = 12;

  printf("Now x becomes %d\n", x);

  return 0;
}
