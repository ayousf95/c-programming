//
// concat.c
//
// Doing concatination using macros
//
#include <stdio.h>

#define GREETINGS(msg) say_##msg()

void say_hello(void){
  puts("Hello!");
}

void say_goodbye(void){
  puts("Goodbye!");
}

int main(void){
  GREETINGS(hello);
  GREETINGS(goodbye);
  return 0;
}

  
  
