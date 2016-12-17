//
// pass.c
//
// Program to check if a student has passed the exam or not.
//
#include <stdio.h>

#define PASS_PERCENTAGE 40

float get_percentage();

int main(void){
  float percentage = get_percentage();

  if(percentage >= PASS_PERCENTAGE){
    puts("You passed!");
  }else {
    puts("You failed!");
  }

  return 0;
}

float get_percentage(){
  float percentage;
  
  puts("So, what is your percentage in the exams ? ");
  scanf("%f", &percentage);

  return percentage;
}

