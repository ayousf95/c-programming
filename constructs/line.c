//
// line.c
//
// Draw a line of a given length.
//
#include <stdio.h>

void draw_line(int length);

int main(void){
  int length;

  printf("Enter the length of the line ? ");
  scanf("%d", &length);

  draw_line(length);

  return 0;
}

void draw_line(int length){
  int i;

  while(i < length){
    putc('*', stdout);
    i = i + 1;
  }

  putc('\n', stdout);
}
