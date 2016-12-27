//
// shadow.c
// A program to show local scope
//
#include <stdio.h>

int x = 10;

int main(void){
  int x = 20;

  printf("in main x = %d\n", x);

  {
    int x = 30;
    printf("in main - in block x = %d\n", x);
  }

  return 0;
}
