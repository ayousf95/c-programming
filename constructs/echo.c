//
// echo.c
//
// Echos input.
//
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int c;

  while((c = getchar()) != EOF){
    putc(c, stdout);
  }

  return 0;
}
