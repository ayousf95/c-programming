//
// two_dimensional_array.c
// A program to show how to populate and print
// a two dimensional array
//
#include <stdio.h>

#define MAX_SIZE 5

int main(void){
  int A[][MAX_SIZE] = {1, 2, 3, 4, 5,
		       3, 4, 5, 6, 7,
		       1, 1, 1, 1, 1,
		       0, 0, 0, 0, 0,
		       9, 8, 7, 5, 6};

  for(int i = 0; i < MAX_SIZE; i++){
    for(int j = 0; j < MAX_SIZE; j++){
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }

  return 0;
}
