#include <stdio.h>

int square(int x);

int main(void){
  int a = 10;
  int square_of_a = square(a);

  printf("The square of %d is %d\n", a, square_of_a);
  return 0;
}

int square (int a){
  return a * a;
}
