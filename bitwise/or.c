#include <stdio.h>

int main(void){
  unsigned char x = 0x10;
  unsigned char y = 0xFC;
  unsigned char z = x | y;

  printf("%x & %x = %x\n", x, y, z);
  return 0;
}

  
