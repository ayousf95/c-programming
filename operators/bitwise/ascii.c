#include <stdio.h>

int main(void){
  for(int i = 0; i <= 127; ++i){
    printf("%c = %x\n", (char) i, i);
  }

  return 0;
}
