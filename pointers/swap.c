//
// swap.c
// A program to demonstrate how we can change values
// in a function although C only supports call-by-value
//
#include <stdio.h>
#include <assert.h>

void swap(int *pointer_to_x, int *pointer_to_y){
  int temp = *pointer_to_x;
  *pointer_to_x = *pointer_to_y;
  *pointer_to_y = temp;
}

int main(void){
  int x = 100;
  int y = 200;

  swap(&x, &y);

  assert(x == 200);
  assert(y == 100);
  return 0;
}
