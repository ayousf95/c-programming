//
// combine.c
// Combine two functions that act
// on an array
//
#include <stdio.h>

typedef int (*FUNC) (int);

int square(int x){
  return x * x;
}

int add_10(int x){
  return x + 10;
}

int combine(int value, FUNC funcs [], int f_count){
  for(int i = 0; i < f_count; i++){
    value = funcs[i](value);
  }

  return value;
}

int main(void){
  int x = 20;
  FUNC funcs[] = {square, add_10};
  int y = combine(x, funcs, 2);
  
  printf("After squaring and adding 10, %d becomes %d\n", x, y);

  return 0;
}
  
  

