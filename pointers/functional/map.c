//
// map.c
//
// Creating a mapper function. This function
// takes a function and an array (with length)
// as input and applies the function to each
// element of the array
//
#include <stdio.h>
#include <stdlib.h>

typedef int (*MAPPER)(int);

int* map(MAPPER func, int a [], int a_count){
  int *result;

  result = calloc(sizeof(int), a_count);

  for(int i = 0; i < a_count; i++){
    result[i] = func(a[i]);
  }

  // Be careful with this pointer. You have
  // to ensure that you free this pointer...
  return result;
}

int square(int x){
  return x * x;
}

int main(void){
  int values [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *doubles = map(square, values, 10);

  printf("The doubles are : ");
  for(int i = 0; i < 10; i++){
    printf("%d ", doubles[i]);
  }

  printf("\n");

  return 0;
}

  
  

