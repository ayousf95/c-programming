//
// simple_ptf.c
// A simple example of pointer to functions
//
#include <stdio.h>

int add(int x, int y){
  return x + y;
}

int inc(int x){
  return x + 1;
}

int main(void){
  int (*padd) (int, int);
  int (*pinc) (int);
  
  padd = add;
  pinc = inc;

  printf("Sum of 10 and 15 is %d\n", padd(10, 15));
  printf("Incrementing 50 we get %d\n", pinc(50));

  return 0;
}
