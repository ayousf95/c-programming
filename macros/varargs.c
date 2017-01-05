//
// varargs.c
//
// A program to show how varargs can be used with macros
//
#include <stdio.h>
#include <stdlib.h>

#define error_message(format, ...) {					\
    fprintf(stderr, "%s/%s:%d > ", __FILE__,  __func__, __LINE__);	\
    fprintf(stderr, format, ##__VA_ARGS__);				\
  }

int main(void){
  int number;

  puts("Enter an even number ?");
  scanf("%d", &number);

  if(number %2 != 0){
    error_message("%d is not random\n", number);
  }else {
    puts("Thanks");
  }

  return 0;
}
