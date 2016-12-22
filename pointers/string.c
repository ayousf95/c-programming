//
// string.c
// string utilities
//
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool is_end_of_string(char *s){
  return *s == '\0';
}

int my_strlen(char* s){
  int length = 0;

  while(!is_end_of_string(s)){
    length++;
    s++;
  }

  return length;
}

int char_count(char* s, char c){
  int char_count = 0;

  while(!is_end_of_string(s)){
    if(*s == c){
      char_count++;
    }
    s++;
  }

  return char_count;
}

bool are_equal(char *s1, char *s2){
  while(!is_end_of_string(s1) && !is_end_of_string(s2)){
    if(*s1 != *s2){
      break;
    }
    s1++;
    s2++;
  }
  return is_end_of_string(s1) && is_end_of_string(s2);
}

int main(void){
  char *str1 = "This is my first string";
  char *str2 = "This is my second string";

  assert(my_strlen(str1) == 23);
  assert(char_count(str1, ' ') == 4);
  assert(are_equal(str1, str1));
  assert(!are_equal(str1, str2));
  return 0;
}
