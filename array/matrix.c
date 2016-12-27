//
// matrix.c
//
// A simple program to add two matricies
//
#include <stdio.h>

#define MAX_SIZE 10

void get_dimension(int *rows, int *cols){
  puts("Enter the matrix dimensions");
  printf("rows ? ");
  scanf("%d", rows);
  printf("cols ? ");
  scanf("%d", cols);
}

void get_matrix(char *message, int X[][MAX_SIZE], int rows, int cols){
  puts(message);
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      scanf("%d", &X[i][j]);
    }
  }
}

void add_matrices(int result [][MAX_SIZE],
		  int A[][MAX_SIZE],
		  int B[][MAX_SIZE],
		  int rows, int cols){
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      result[i][j] = A[i][j] + B[i][j];
    }
  }
}

void print_matrix(char *message, int X[MAX_SIZE][MAX_SIZE], int rows, int cols){
  puts(message);
  
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d ", X[i][j]);
    }
    printf("\n");
  }
}

  
int main(void){
  int A[MAX_SIZE][MAX_SIZE];
  int B[MAX_SIZE][MAX_SIZE];
  int C[MAX_SIZE][MAX_SIZE];
  int rows;
  int cols;

  get_dimension(&rows, &cols);
  get_matrix("Enter matrix A", A, rows, cols);
  get_matrix("Enter matrix B", B, rows, cols);

  add_matrices(C, A, B, rows, cols);

  print_matrix("Sum of A and B is", C, rows, cols);

  return 0;
}
