#include <stdio.h>
#include <assert.h>

int main(){
  int x = 50;
  int y = 30;

  assert(10 + 5 == 15);
  assert(x + y == 80);
  assert(x - y == 20);
  assert(x % y == 20);
  
  return 0;
}
