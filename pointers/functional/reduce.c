//
// reduce.c
//
// Creating a simple reduce function
//

#include <stdio.h>

typedef int (*REDUCER)(int, int);

int reduce(REDUCER func, int initial_value, int a[], int a_count){
  int aggr = initial_value;

  for(int i = 0; i < a_count; ++i){
    aggr = func(aggr, a[i]);
  }
  
  return aggr;
}

int sum(int aggr, int val){
  return aggr + val;
}

int sum_of_squares(int aggr, int val){
  return aggr + (val * val);
}

int main(void){
  int values [] = {1, 2, 3, 4, 5, 6, 7, 8};

  printf("Sum of values is %d\n", reduce(sum, 0, values, 8));
  printf("Sum of squares of values is %d\n", reduce(sum_of_squares, 0, values, 8));
  
  return 0;
}
