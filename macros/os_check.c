//
// os_check.c
//
// Program to conditionally run functions (compile time check)
//
#include <stdio.h>

int main(void){
#ifdef WIN32
  puts("I am running on Windows");
#else
  puts("I am not on Windows");
#endif
}
