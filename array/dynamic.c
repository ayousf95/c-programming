//
// dynamic.c
//
// Program to demonstrate how to get
// heap memory and use it.
//
#include <stdio.h>
#include <stdlib.h>

int main(void){
  int *pointer;

  pointer = malloc(sizeof(int));

  *pointer = 30;

  printf("Instead of using a stack memory for int we use "
	 " heap/dynamic memory. The value at the new location is %d\n", *pointer);

  free(pointer);
  
  return 0;
}

	 
  
