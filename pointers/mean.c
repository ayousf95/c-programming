//
// mean.c
//
// A program to show how to use realloc
// to reallocate memory
//
#include <stdio.h>
#include <stdlib.h>

int get_count(){
  int count;

  puts("How many numbers are there ?");
  scanf("%d", &count);

  return count;
}

int* allocate_memory(int *values, int count){
  return !values ? malloc(count * sizeof(int)): realloc(values, count * sizeof(int));
}

void get_values(int *values, int count){
  puts("Enter the values");
  for(int i = 0; i < count; i++){
    printf("%d> ", i+1);
    scanf("%d", &values[i]);
  }
}

double calculate_mean(int *values, int count){
  double sum = 0;

  for(int i = 0; i < count; i++){
    sum += values[i];
  }

  return sum/count;
}

int should_repeat(){
  char c;
  printf("Do you want to calculate mean again (Y|N) ? ");
  scanf("\n%c", &c);
  return c == 'Y' || c == 'y';
}
    
int main(void){
  int *values = NULL;
  
  do {
    int count = get_count();
    values = allocate_memory(values, count);
    get_values(values, count);

    printf("Mean is = %lf\n", calculate_mean(values, count));
  }while( should_repeat() );

  free(values);
  return 0;
}
