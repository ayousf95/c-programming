//
// swap_pointers.c
// A program to swap pointers
//
#include <stdio.h>

void swap_pointers(int **pointer_to_p_pointer, int **pointer_to_q_pointer){
  int *swap_pointer;
  swap_pointer = *pointer_to_p_pointer;
  *pointer_to_p_pointer = *pointer_to_q_pointer;
  *pointer_to_q_pointer = swap_pointer;
}

int main(void){
  int x = 10;
  int y = 20;

  int *pointer_to_x = &x;
  int *pointer_to_y = &y;

  printf("x = %d, y = %d, pointer_to_x = %p, pointer_to_y = %p\n",
	 x, y, pointer_to_x, pointer_to_y);
  swap_pointers(&pointer_to_x, &pointer_to_y);

  *pointer_to_x = 100;
  *pointer_to_y = 200;

  printf("After swapping pointers and changing their values, x = %d, y = %d\n"
	 "as the addresses have changed pointer_to_x = %p, pointer_to_y = %p\n",
	 x, y, pointer_to_x, pointer_to_y);
  return 0;
}
