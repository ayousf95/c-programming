#include <stdio.h>

void print_address(char *var_name, int *x){
  printf("address of %s = %p(%d)\n", var_name, x, (int)x);
}

int add(int a, int b){
  int c = a + b;

  print_address("a", &a);
  print_address("b", &b);
  print_address("c", &c);
  
  c = a + b;
  return c;
}

int main(void){
  int x = 10;
  int y = 20;
  int z;
  
  print_address("x", &x);
  print_address("y", &y);
  print_address("z", &z);
  
  z = add(x, y);

  return 0;
}

  
