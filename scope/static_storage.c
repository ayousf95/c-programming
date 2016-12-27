//
// static_storage.c
//
#include <stdio.h>

void automatic_demo(){
  auto int x = 0;
  x = x + 1;
  printf("auto   x = %d\n", x);
}

void static_demo(){
  static int x = 0;
  x = x + 1;
  printf("static x = %d\n", x);
}

int main(void){
  for(int i = 0; i < 5; i++){
    automatic_demo();
    static_demo();
  }

  return 0;
}
