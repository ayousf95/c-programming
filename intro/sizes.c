#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(void){
  int int_v;
  short short_v;
  long long_v;
  
  printf("Sizes of int=%lu, short=%lu, long=%lu\n", sizeof(int_v), sizeof(short_v), sizeof(long_v));

  printf("Range of short signed int: %d - %d\n", SHRT_MIN, SHRT_MAX);
  printf("Range of long unsigned int: 0 - %lu\n", ULONG_MAX);
  return 0;
}
