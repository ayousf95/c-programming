
#include <stdio.h>

int my_strlen (char s[]) {
  int counter = 0;

  while( s[counter] != '\0' ){
    counter = counter + 1;
  }

  return counter;
}

int main(void){
  char s [] = "My Hello World";

  printf("The length of %s is %d\n", s, my_strlen(s));
  return 0;
}
  
