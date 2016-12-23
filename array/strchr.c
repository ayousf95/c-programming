//
// strchr.c
//
// A program to demonstrate how to find a character index
// in a string.
//
#include <stdio.h>
#include <assert.h>

#define EOS '\0'

int strchr__(char *str, char c){
  int length = 0;

  while( (*str != EOS) && (*str != c) ){
    length++;
    str++;
  }

  return (*str == c) ? length : -1;
}
    
int main(void){
  char *a_line = "A quick brown fox jumps over a lazy dog";

  assert(strchr__(a_line, 'A') == 0);
  assert(strchr__(a_line, 'B') == -1);
  assert(strchr__(a_line, 'g') == 38);

  return 0;
}

  
