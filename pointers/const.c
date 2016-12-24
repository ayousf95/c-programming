//
// const.c
//
// Using const with pointers
//
#include <stdio.h>

void inc_wrong(const int *px){
  int y = 20;
  //!*px = *px + 1;
  printf("const int*: I can only read from int const pointer! %d\n", *px);
  px = &y;
  printf("const int*: We can also point it to something else. %d\n", *px);
}

void inc(int* const px){
  int y = 20;
  *px = *px + 1;
  printf("int* const: I can read as well as write to the pointer but can't point it "
	 " to something else! : %d\n", *px);
  //! px = &y;
}

int main(void){
  int x;
  
  x = 10;
  inc_wrong(&x);
  inc(&x);

  return 0;
}
