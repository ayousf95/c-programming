//
// brackets.c
//
// Be careful with the brackets
#include <stdio.h>

#define DOUBLE_CONFUSING(x) x + x
#define DOUBLE(x) (x + x)

int main(void){
  int x = 20;

  printf("using DOUBLE_CONFUSING: %d\n", DOUBLE_CONFUSING(x) * 5);
  printf("using DOUBLE: %d\n", DOUBLE(x) * 5);

  return 0;
}
