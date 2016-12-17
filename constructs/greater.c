//
// greatest.c
//
// A program to find greatest amount three integers.
//
#include <stdio.h>

int greatest(int a, int b, int c);

int main(void){
  int a, b, c;
  
  puts("This program finds the greatest amoung three integers");
  puts("Enter the three numbers separated by spaces ?");
  scanf("%d %d %d", &a, &b, &c);

  int result = greatest(a, b, c);

  printf("Greatest number is : %d\n", result);

  return 0;
}

int greatest(int a, int b, int c){
  int result;
  
  if(a > b){
    if(a > c){
      result = a;
    }else {
      result = c;
    }
  }else {
    if(b > c){
      result = b;
    }else {
      result = c;
    }
  }

  // or shortcut
  // a > b ? ((a > c)? a : c) : ((b > c) ? b : c);
  return result;
}
