//
// point.c
//
// A program to demonstrate how a structure
// is constructed
#include <stdio.h>

struct point {
  int x;
  int y;
};

int main(void){
  struct point p1;

  p1.x = 10;
  p1.y = 20;

  printf("Point is (%d, %d)\n", p1.x, p1.y);

  return 0;
}
