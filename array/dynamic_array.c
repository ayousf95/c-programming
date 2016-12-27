//
// dynamic_array.c
// A program to allocate memory to
// an array at runtime(dynamically).
//
#include <stdio.h>
#include <stdlib.h>

int sum(int *values, int count){
  int sum = 0;

  for(int i = 0; i < count; i++){
    sum += values[i];
  }
  
  return sum;
}

int main(void){
  int count;
  int *values;
  
  puts("How many values do you want to add ? ");
  scanf("%d", &count);
  
  values = calloc(count, sizeof(int));
  
  puts("Enter the value one by one");
  for(int i = 0; i < count; i++){
    printf("%d> ", i + 1);
    scanf("%d", &values[i]);
  }

  printf("The sum of these values are :- %d\n", sum(values, count));
  free(values);

  return 0;
}

