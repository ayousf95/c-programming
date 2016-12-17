//
// sum.c
//
// Calculates the sum of a list of numbers
//

#include <stdio.h>

int main(void){
  int list_count;

  puts("How many numbers are there in the list ?");
  scanf("%d", &list_count);

  puts("Enter the numbers separated by spaces ?");
  int i = 0;
  int sum = 0;
  while(i < list_count){
    int num;
    scanf("%d", & num);
    sum += num;
    i += 1; 
  }

  printf("The sum of these numbers is : %d\n", sum);
  return 0;
}

