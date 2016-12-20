//
// byte_traversal.c
// Using a char pointer to see what is in an int
//
#include <stdio.h>

typedef unsigned char byte;

int main(void){
  int  num = 0xff675474;
  byte *pbyte;

  pbyte  = (byte*)&num;
  printf("%-10s|%-20s|%-10s\n", "Byte", "Address", "Value");
  for(int i = 0; i < sizeof(int); i++){
    byte *current = pbyte + i;
    printf("%-10d|%-20p|%-10x\n", i, current, *current);
  }

  return 0;
}
