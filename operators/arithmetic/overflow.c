#include <stdio.h>

int main(void){
  signed char c = 127;
  unsigned char uc = 255;
  
  c = c + 1;
  uc = uc + 1;
  
  printf("Overflow signed char : %d\n", c);
  printf("Overflow unsigned char: %d\n", uc);
  
  return 0;
}
