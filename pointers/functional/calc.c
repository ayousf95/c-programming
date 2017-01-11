//
// calc.h
// Using pointer to functions to make a choice
//
#include <stdio.h>

int add(int x, int y){
  return x + y;
}

int sub(int x, int y){
  return x - y;
}

int div(int x, int y){
  return x/y;
}

int mul(int x, int y){
  return x * y;
}

int (*operations[])(int, int) = {add, sub, mul, div};

int main(void){
  int choice;
  
  printf("Enter an operation\n"
	 "1 - Addition\n"
	 "2 - Subtraction\n"
	 "3 - Multiplication\n"
	   "4 - Division\n"
	 "\nChoice ? ");
  scanf("%d", &choice);
  if(choice >= 1  && choice <= 4){
    int a, b;
    printf("Enter numbers ? ");
    scanf("%d %d", &a, &b);    
    printf("The result is %d\n", operations[choice-1](a, b));
  }

  return 0;
}


  
