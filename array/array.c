//
// array.c
//
// A program to demonstrate how to create an array and how
// to initialize it
//
#include <stdio.h>

#define MAX_COUNT 10

void initialize_with_range(int numbers [], int count){
  for(int i = 0; i < count; ++i){
    numbers[i] = i;
  }
}

void print_array(int numbers [], int count){
  for(int i = 0; i < count; ++i){
    printf("%d ", numbers[i]);
  }
  printf("\n");
}

int main(void){
  int numbers [MAX_COUNT];
  char hello [] = {'h', 'e', 'l', 'l', 'o', '\0'};
  char world [] = "World";
  int  int_values [] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  
  initialize_with_range(numbers, MAX_COUNT);
  print_array(numbers, MAX_COUNT);

  return 0;
}
