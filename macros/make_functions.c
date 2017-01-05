//
// make_functions.c
//
// A macro creating functions!
//
#include <stdio.h>

#define CREATE_GREETINGS_FUNCTION(x)\
  void say_##x (char* name){ \
    printf(#x " %s\n", name);\
  }

CREATE_GREETINGS_FUNCTION(hello)
CREATE_GREETINGS_FUNCTION(goodbye);

int main(void){

  say_hello("Ahmad");
  say_goodbye("Asma");

  return 0;
}
