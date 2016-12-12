#include <stdio.h>

#define CASE_BIT 0x20

int is_uppercase(unsigned char c){
  return (c & CASE_BIT) == 0;
}

unsigned char to_uppercase (unsigned char c){
  return c & 0xDF;
}

unsigned char to_lowercase (unsigned char c){
  return c | 0x20;
}

int main(void){
  unsigned char c;

  printf("Enter a character ? ");
  scanf("%c", &c);

  if(is_uppercase(c)){
    printf("Lowercase value is : %c\n", to_lowercase(c));
  }else {
    printf("Uppercase value is : %c\n", to_uppercase(c));
  }

  return 0;
}
