//
// call_by_value.c
//
// A program to demonstrate that you pointers
// is a way to simulate a call-by-reference
// in C which only knows call-by-value.
//
#include <stdio.h>

void try_increment_by_value(int x){
  x++;
}

void increment_using_pointers(int *x){
  (*x)++;
}

int main(void){
  int x = 100;

  printf("x = %d\n", x);
  try_increment_by_value(x);
  printf("Now x is after incrementing by value is %d\n", x);

  increment_using_pointers(&x);
  printf("After using pointers, we have changed the value to %d\n", x);

  return 0;
}
