//
// factorial.c
//
// A program to calculate factorial of a number
//
#include <stdio.h>

int main(void){
  int x;

  puts("Enter a number ?");
  scanf("%d", &x);

  int fact = 1;
  while(x > 1){
    fact = fact * x;
    x -= 1;
  }

  printf("Factorial is : %d\n", fact);
  return 0;
}
  
