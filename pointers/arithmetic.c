//
// arithmetic.c
// A program to demonstrate how pointer's arithmetic is done
//
#include <stdio.h>

#define PRINT_FORMAT "%10s|%20p|%20p|%20p\n"

int main(void){
  char char_var = 'c';
  short short_var = 10;
  int int_var = 10;
  double double_var = 40.00;
  
  char *char_pointer = &char_var;
  short *short_pointer = &short_var;
  int  *int_pointer = &int_var;
  double *double_pointer = &double_var;

  printf("%10s|%20s|%20s|%20s\n", "Data Type", "Address", "Address-1", "Address+1");
  printf(PRINT_FORMAT, "char", char_pointer, char_pointer-1, char_pointer+1);
  printf(PRINT_FORMAT, "short", short_pointer, short_pointer-1, short_pointer+1);
  printf(PRINT_FORMAT, "int", int_pointer, int_pointer-1, int_pointer+1);
  printf(PRINT_FORMAT, "double", double_pointer, double_pointer-1, double_pointer+1);

  return 0;
}
