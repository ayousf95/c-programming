//
// dynamic_arrays
//
// A program to demonstrate a true array allocation.
// Note that this problem with only work with C99+
// compilers
//
#include <stdio.h>
#include <stdlib.h>

void initialize_row(int data [], int col_count){
  for(int i = 0; i < col_count; i++){
    data[i] = rand() % 100;
  }
}

void print_row(int row [], int col_count){
  for(int i = 0; i < col_count; i++){
    printf("%d ", row[i]);
  }

  printf("\n");
}

int main(void){
  int row_count = 3;
  int col_count = 3;
  int (*data)[col_count];

  data = malloc(sizeof(int[row_count][col_count]));

  for(int i = 0; i < row_count; i++){
    initialize_row(data[i], col_count);
  }

  for(int i = 0; i < row_count; i++){
    print_row(data[i], col_count);
  }

  return 0;
}
  
  
