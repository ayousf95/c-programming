//
// const.c
//
// Using const with pointers
//
#include <stdio.h>

//
// Type            pointee/variable pointer
// const int *cip   NO               YES
// int* const ipc   YES              NO
//
// int x = 10;
// int y = 20;
// cip = &x;
// ipc = &x;
//
// *cip = 40 !ERROR
// *cip = &y;
// *ipc = 40;
// *ipc = &y; !ERROR
int main(void){
  int x = 10;
  int y = 20;
  const int *cip = &x;
  int* const ipc = &x;

  *cip = 100; //!ERROR
  cip = &y;
  *ipc = 100;
  ipc = &y;   //!ERROR

  return 0;
}
