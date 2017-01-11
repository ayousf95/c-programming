//
// array_of_arrays.c
// A program to illustrate that the multidimensional
// array is an illusion created using the concept of
// pointers
#include <stdio.h>

#define MAX_ROWS 10
#define MAX_COLS 10

// int row []
void print_row(int *row, int col_count){
  for(int j = 0; j < col_count; j++){
    printf("%d ", row[j]);
  }
  printf("\n");
}

// int rows [][MAX_COLS]
void print_values(int (*rows) [MAX_COLS], int row_count, int col_count){
  for(int i = 0; i < row_count; i++){
    print_row(rows[i], col_count);
  }
}

int main(void){
  int a2[MAX_ROWS][MAX_COLS] = {{1, 2, 3},
				{4, 5, 6},
				{7, 8, 9}};
  print_values(a2, 3, 3);

  return 0;
}
