//
// fib.c
//
// A program to print the fibinacci series.
//
#include <stdio.h>

int main(void){
  int x;
  int a, b;
  
  puts("Enter the number of elements of fibinacci you want to print ?");
  scanf("%d", &x);

  a = 0;
  b = 1;

  printf("%d ", a);
  while(x > 2){
    printf("%d ", b);
    int old_b = b;
    b = a + b;
    a = old_b;
    x -= 1;
  }

  puts("");

  return 0;
}
  
