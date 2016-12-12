#include <stdio.h>

int main(void){
  int x = 10;
  int y = x++;

  printf("y = %d, x = %d\n", y, x);
  
  int z = ++x;

  printf("z = %d, x = %d\n", z, x);
  return 0;
}

  
