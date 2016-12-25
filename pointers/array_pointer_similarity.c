//
// array_pointer_similarity.c
// This program demonstrates similarites between
// array and pointer
//
#include <stdio.h>
#include <assert.h>

int main(void){
  int a [] = {10, 20, 30, 40, 50, 60, 70, 80};
  int *p = a;

  assert(a == &a[0]);
  assert(p == &a[0]);
  assert(p[0] == a[0]);
  assert(p[2] == 30);
  assert(*(p + 3) == 40);
  assert(*(p + 5) == a[5]);
  assert(*(a + 3) == 40);
  assert(*(a + 5) == p[5]);

  return 0;
}
