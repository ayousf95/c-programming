//
// os_check.c
//
// Program to conditionally run functions (compile time check)
//
#include <stdio.h>

int main(void){
#ifdef __linux
  puts("I am running on linux");
#else
  puts("I am not on linux");
#endif
}
