//
// offers.c
//
// A program to tell the customers what facilities
// then get for a given coupon.
//
#include <stdio.h>

void output_facilities(int coupon);

int main(void){
  int coupon;

  puts("Enter your coupon value (1-4) ?");
  scanf("%d", &coupon);

  output_facilities(coupon);

  return 0;
}

void output_facilities(int coupon){
  switch(coupon){
  case 4:
    puts("You get a brand new car");

  case 3:
    puts("You get a Rs. 2000/- cash back");

  case 2:
    puts("You get 50% discount");

  case 1:
    puts("You get a pen");

  default:
    puts("Nothing");
  }
}
