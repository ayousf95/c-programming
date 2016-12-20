//
// endian.c
//
// A program to find if this machine is little-endian
// or big-endian
//
#include <stdio.h>
#include <stdbool.h>

int main(void){
  short int x = 0xAABB;
  char* first_byte = (char*)&x;
  bool is_little_endian = *first_byte = 0xAA;

  printf("This machine is : %s\n",
	 is_little_endian ? "little endian": "big endian");

  return 0;
}

