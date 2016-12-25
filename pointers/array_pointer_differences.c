//
// array_pointer_differences.c
// A program to demonstrate the differences between
// an array and a pointer
//
#include <stdio.h>

int main(void){
  // Difference #1
  char s [] = {'a', 'b', 'c', 'd'};
  //char *ps  = {'a', 'b', 'c', 'd'}; //ERROR: It wont' work.
  char *ps = "abcd";

  // Difference #2
  printf("Size of s is %lu and size of ps is %lu\n", sizeof(s), sizeof(ps));

  // Difference #3
  //s = ps; //ERROR: You cannot do this
  return 0;
}
