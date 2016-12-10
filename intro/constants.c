#include <stdio.h>

int main(void){
  const char* something = "One & "
    "Two";
  printf("\"Hello %s\" \x31\n", something);
  return 0;
}
