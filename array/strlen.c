//
// strlen.c
// A program to calculate the length of a string.
//
#include <stdio.h>

#define MAX_STRLEN__ 100

int strlen__(char* str){
  int length;

  while(*str != '\0'){
    str++;
    length++;
  }

  return length;
}


int main(void){
  char str[MAX_STRLEN__ + 1];
  
  puts("Enter a string ?");
  fgets(str, MAX_STRLEN__, stdin);

  printf("The length of this string is %d\n", strlen__(str));

  return 0;
}
