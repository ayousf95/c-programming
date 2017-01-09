//
// main.c
//
// A library to use calculator
//
#include <stdio.h>
#include <assert.h>

#include "calc.h"

int main(void){
  assert(add(1, 2) == 3);
  assert(add(10, 20) == 30);
  assert(subtract(20, 10) == 10);
  assert(multiply(20, 50) == 1000);
  assert(division(12, 3) == 4);
}
