#include <stdio.h>

void echo_int();
void echo_float();
void echo_double();
void echo_string();

int main(void){
  echo_int();
  echo_float();
  echo_double();
  echo_string();
  return 0;
}


void echo_int(void){
  int val;

  printf("Enter an integer ? ");
  scanf("%d", &val);
  printf("You have entered %d\n", val);
}

void echo_float(void){
  float val;

  printf("Enter a floating point number? ");
  scanf("%f", &val);
  printf("You have entered %f\n", val);
}

void echo_double(void){
  double val;

  printf("Enter a double floating point number? ");
  scanf("%lf", &val);
  printf("You have entered %lf\n", val);
}

void echo_string(void){
  char str[100];

  fflush(stdin);
  printf("Enter a string? ");
  scanf("\n%99[^\n]", str);
  
  printf("You have entered %s\n", str);
}

