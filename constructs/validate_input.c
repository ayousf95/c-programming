//
// validate_input.c
//
// scanf is not safe and is not a recommended choice for numeric input.
// One way to make is safe is to take the input as string and then
// using standard library functions to convert it into number.
//
#include <stdio.h>
#include <stdlib.h>

int get_age(void);
int get_weight(void);

int main(void){
  int age;
  float weight;

  age = get_age();
  weight = get_weight();

  printf("Your age is %d and your weight is %f\n", age, weight);

  return 0;
}

void error(char prompt []){
  puts(prompt);
  exit(-1);
}

int get_age(void){
  int age;
  puts("Please enter your age ?");
  scanf("%d", &age);
  if(age < 20){
    error("You can't be that young");
  }else if (age > 40){
    error("You can't be that old");
  }else {
    return age;
  }
}

int get_weight(void){
  float weight;
  puts("Please enter your weight ?");
  scanf("%f", &weight);
  if(weight < 30){
    error("You can't be that skinny");
  }else if(weight > 150){
    error("You can't be that heavy");
  }else {
    return weight;
  }
}
