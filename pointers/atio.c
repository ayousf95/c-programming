//
// atoi.c
//
// A program to convert a string to integer.
//
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

//
// It is not as smart as the standard library
// function atoi as it does not take into account
// many wide range of use cases
//
int atoi__(char *str){
  int result = 0;

  while( (*str != EOF) && isdigit(*str) ){
    result = result * 10 + (*str - '0');
    str++;
  }

  return result;
}


int main(void){

  assert(atoi__("888") == 888);
  assert(atoi__("784abc") == 784);
  assert(atoi__("abcd") == 0);
  assert(atoi__("abcd7474") == 0);

  return 0;
}

