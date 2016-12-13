#include <stdio.h>
#include <assert.h>

int main(void){
  int x = 10;
  int y = 20;
  int z;
  
  assert(x < y);
  assert(y > x);
  assert(x != y);
  assert(5 < 6);
  assert(5 <= 5);
  assert(10 >= 5);
  assert(10 >= 10);
  assert(x < y && y < 100);
  assert(x > y || y < 100);

  assert(!0);
  assert(1);
  assert(z = 1);
  assert(!(z = 0));

  return 0;
}
