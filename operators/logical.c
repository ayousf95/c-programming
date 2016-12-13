#include <stdio.h>

int main(void){
  int x = 10;
  int y = 20;

  (x > y) && puts("x > y");
  (y > x) && puts("y > x");
  (x > y) || puts("y > x");
  (y > x) || puts("x > y");

  return 0;
}


  
