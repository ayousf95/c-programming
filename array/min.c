//
// min.c
// A program to find minimum value in an array
// of integers.
//
#include <stdio.h>
#include <limits.h>

#define MAX_NUMBERS 1000

//int min(int *numbers, int count)
int min(int numbers [], int count){
  int min = INT_MAX;

  for(int i = 0; i < count; i++){
    if(numbers[i] < min){
      min = numbers[i];
    }
  }

  return min;
}

int main(void){
  int count;
  int numbers[MAX_NUMBERS];
  
  puts("How many numbers do you have ?");
  scanf("%d", &count);
  
  puts("Enter the numbers");
  for(int i = 0; i < count; i++){
    printf("%d> ", i+1);
    scanf("%d", &numbers[i]);
  }

  printf("The minimum number is %d\n", min(numbers, count));
  return 0;
}

  
  
