//
// stringify.c
//
// A program to show how macros can be used
// to stringify a variable to get its name
#include <stdio.h>

#define print_int(x) printf("%s = %d\n", #x, x)

int main(void){
  int x = 20;
  int y = 30;

  print_int(x);
  print_int(y);

  return 0;
}
