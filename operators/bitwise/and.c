#include <stdio.h>
#include <assert.h>
int main(void){
  unsigned char x =  0x10;
  unsigned char y =  0xFC;
  unsigned char z = x & y;
  

  printf("%x & %x = %x\n", x, y, z);
  assert ((0x0f & 0x55) == 0x05);
   
  return 0;
}

  
