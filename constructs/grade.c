//
// grade.c
//
// Given the percentage of a student, this program
// calculates the grade.
//
#include <stdio.h>

#define GRADE_A_PCT 80
#define GRADE_B_PCT 60
#define GRADE_C_PCT 50
#define GRADE_D_PCT 40

float get_percentage();
char calculate_grade(float percentage);

int main(void){
  float percentage = get_percentage();
  char grade = calculate_grade(percentage);

  printf("Your Grade is : %c\n", grade);
  return 0;
}

float get_percentage(){
  float percentage;
  
  puts("What is your percentage in exams ? ");
  scanf("%f", &percentage);

  return percentage;
}

char calculate_grade(float percentage){
  char result;
  
  if(percentage >= GRADE_A_PCT){
    result = 'A';
  }else if(percentage >= GRADE_B_PCT){
    result = 'B';
  }else if(percentage >= GRADE_C_PCT){
    result = 'C';
  }else if(percentage >= GRADE_D_PCT){
    result = 'D';
  }else {
    result = 'F';
  }

  return result;
}
