//
// vowel.c
//
// A program to check whether a character is a vowel
// or a consonent
//
#include <stdio.h>
#include <stdbool.h>

int main(void){
  char c;
  bool is_vowel;
  
  puts("Enter a character ? ");
  scanf("%c", &c);

  switch(c){
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    is_vowel = true;
    break;

  default:
    is_vowel = false;
  }

  printf("It is a %s\n", is_vowel? "vowel" : "consonant");
  return 0;
}
