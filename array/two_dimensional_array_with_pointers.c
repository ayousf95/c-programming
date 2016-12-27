//
// two_dimensional_array_with_pointers.c
// Using pointers with two dimentional arrays
//
#include <stdio.h>

#define MAX_SIZE 3

int main(void){
  int A[MAX_SIZE][MAX_SIZE] = {1, 2, 3,
			       4, 5, 6,
			       7, 8, 9};
  int *a_ptr;

  a_ptr = (int*) A;
  for(int i = 0; i < MAX_SIZE; i++){
    for(int j = 0; j < MAX_SIZE; j++){
      printf("%d ", *(a_ptr + i * MAX_SIZE + j));
    }
    printf("\n");
  }

  return 0;
}

  
