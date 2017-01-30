//
// vector.c
// A program implementing a vector using
// structures.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct vector {
  double *values;
  int    size;
}Vector;

typedef void (*TRAVERSER)(double);
typedef double (*MAPPER)(double);
typedef void (*REDUCER)(void *, double);

Vector* vector_new(int size){
  Vector *vector = malloc(sizeof(Vector));
  vector->size = size;
  vector->values = calloc(size, sizeof(double));
  return vector;
}

void vector_free(Vector *vector){
  free(vector->values);
  free(vector);
}

Vector* vector_set(Vector *vector, int index, double value){
  vector->values[index] = value;
  return vector;
}

double vector_get(const Vector *vector, int index){
  return vector->values[index];
}

void vector_traverse(const Vector *vector, TRAVERSER func){
  for(int i = 0; i < vector->size; i++){
    func(vector_get(vector, i));
  }
}

Vector* vector_map(Vector *vector, MAPPER func){
  for(int i = 0; i < vector->size; i++){
    vector_set(vector, i, func(vector_get(vector, i)));
  }
  return vector;
}

void vector_reduce(Vector *vector, REDUCER func, void *init_value){
  for(int i = 0; i < vector->size; i++){
    func(init_value, vector->values[i]);
  }
}

void print_double(double x){
  printf("%0.2lf ", x);
}

void vector_print(Vector *vector){
  vector_traverse(vector, print_double);
  printf("\n");
}

double square(double x){
  return x * x;
}

void aggregator(void *arg, double el){
  double *sum = arg;
  *sum += el;
}

int main(void){
  Vector *v = vector_new(20);
  for(int i = 0; i < 20; i++){
    vector_set(v, i, i);
  }

  puts("Calculating square");
  vector_map(v, square);
  vector_print(v);

  double val = 0;
  vector_reduce(v, aggregator, &val);
  printf("The mean is %lf\n", val / v->size);
  
  return 0;
}

