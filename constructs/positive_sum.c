//
// positive_sum.c
//
// The program to calculate the sum of positive numbers.
// Negative numbers are ignored.
//
#include <stdio.h>

int get_list_count(void);
int get_positive_sum(int);

int main(void){
  int list_count = get_list_count();
  int sum = get_positive_sum(list_count);
  printf("The sum is %d\n", sum);
  return 0;
}

int get_list_count(void){
  int count;
  puts("Enter count of numbers to be added ?");
  scanf("%d", &count);
  return count;
}

int get_positive_sum(int list_count){
  puts("Enter numbers one on each line.");

  int sum = 0;
  int i = 1;
  while(i <= list_count){
    int num;
    printf("%d> ", i);
    scanf("%d", &num);
    if(num < 0){
      puts("Ignoring negative numbers");
      continue;
    }
    sum += num;
    i++;
  }

  return sum;
}

