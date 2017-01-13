//
// complex2.c
//
// A program demonstrates how we can make
// our previous complex.c program more
// efficient and more readable
//

#include <stdio.h>
#include <stdlib.h>

struct complex {
  double real;
  double imag;
};

typedef struct complex complex;

#define MAX_STRING 100

complex* new_complex(double real, double imag){
  complex* a = malloc(sizeof(complex));
  a->real = real;
  a->imag = imag;
  return a;
}

complex* add(complex* a, complex* b){
  return new_complex(a->real + b->real, a->imag + b->imag);
}

void print(complex *a){
}

int main(void){
  complex *a;
  complex *b;

  a = new_complex(10, 20);
  b = new_complex(4, 5);

  complex* c = add(a, b);

  printf("The result is %0.2f + j%0.2f\n", c->real, c->imag);
  
  free(c);
  free(b);
  free(a);

  return 0;
}
