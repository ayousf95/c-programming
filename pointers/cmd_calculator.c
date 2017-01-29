//
// cmd_calculator.c
//
// A program to demonstrate how we can use
// command line arguments
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef double (*OPERATOR) (double x, double y);

typedef struct operation {
  int      size;
  double   *arguments;
  OPERATOR operator;
} Operation;

double add(double x, double y){
  return x + y;
}

double subtract(double x, double y){
  return x - y;
}

double multiply(double x, double y){
  return x * y;
}

double divide(double x, double y){
  return x / y;
}

double calculate(const Operation *op){
  double result = op->arguments[0];

  for(int i = 1; i < op->size; i++){
    result = op->operator(result, op->arguments[i]);
  }

  return result;
}

int is_operator_specified(char *argv[]){
  return strcmp(argv[0], "-o") == 0;
}

OPERATOR get_operator(int argc, char *argv[]){
  if(is_operator_specified(argv)){
    OPERATOR operator = NULL;
    char *op_str = argv[1];
    
    if(strcmp(op_str, "add") == 0){
      operator = add;
    }else if(strcmp(op_str, "subtract") == 0){
      operator = subtract;
    }else if(strcmp(op_str, "multiply") == 0){
      operator = multiply;
    }else if(strcmp(op_str, "divide") == 0){
      operator = divide;
    }

    return operator;
  }else {
    return add;
  }
} 
      
char* parse_arguments(Operation *op, int argc, char *argv[]){
  OPERATOR operator = add;

  if(argc < 1){
    return "Too few arguments";
  }

  if(is_operator_specified(argv)){
    if(argc < 2){
      return "Missing operator";
    } else if(argc == 2){
      return "Two few arguments";
    } else {
      operator = get_operator(argc, argv);
      if(!operator){
	return "Unknown operator";
      }
      argc -= 2;
      argv += 2;
    }
  }
    
  op->operator  = operator;
  op->size      = argc;
  op->arguments = malloc(op->size * sizeof(double));
  for(int i = 0; i < argc; i++){
    op->arguments[i] = atof(argv[i]);
  }

  return NULL;
}

void print_usage(char *program_name, char *message){
  printf("%s\n"
	 "usage: %s [-o operation] arguments ...\n"
	 "\toperation - add, subtract, multiply or divide\n"
	 "\targuments - list of double values\n\n",
	 message, program_name);
}

int main(int argc, char* argv[]){
  Operation op;
  char *error_message = parse_arguments(&op, argc-1, argv+1);

  if(error_message){
    print_usage(argv[0], error_message);
    exit(-1);
  }

  
  printf("%lf\n", calculate(&op));
  return 0;
}
