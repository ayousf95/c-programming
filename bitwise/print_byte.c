#include <stdio.h>

void print_byte (unsigned char x, unsigned char mask){
  if((x & mask) == 0){
    printf("0");
  }else {
    printf("1");
  }
}

int main(void){
  unsigned char x = 0xc8;
  int val;

  printf("Enter a byte ? ");
  scanf("%x", &val);

  x = (unsigned char) val;

  print_byte(x, 0x80);
  print_byte(x, 0x40);
  print_byte(x, 0x20);
  print_byte(x, 0x10);
  print_byte(x, 0x08);
  print_byte(x, 0x04);
  print_byte(x, 0x02);
  print_byte(x, 0x01);
  printf("\n");
    
  return 0;
}

  
  
