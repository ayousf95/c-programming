//
// multiplication_table.c
//
// Multiplication table for a given number
//
#include <stdio.h>

int main(void){
  int num;

  puts("Enter a number ?");
  scanf("%d", &num);

  int i = 1;
  while(i <= 10){
    int result = num * i; 
    printf("%d X %d = %d\n", num, i, result);
    i++;
  }

  return 0;
}
