//
// day_of_week.c
//
// A program to print a day name given its number.
//
#include <stdio.h>

int main(void){
  int day;

  puts("Enter a day (1-7, 1-Monday, 7-Sunday)? ");
  scanf("%d", &day);

  switch(day){
  case 1:
    puts("Monday");
    break;

  case 2:
    puts("Tuesday");
    break;

  case 3:
    puts("Wednesday");
    break;

  case 4:
    puts("Thursday");
    break;

  case 5:
    puts("Friday");
    break;

  case 6:
    puts("Saturday");
    break;

  case 7:
    puts("Sunday");
    break;

  default:
    puts("Invalid day");
    return -1;
  }
  
  return 0;
}
