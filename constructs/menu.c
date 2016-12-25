//
// menu.c
// A use case of do-while loop
//
#include <stdio.h>

int show_menu(void){
  int choice;

  printf("Choose a color ? \n"
	 "1. Red\n"
	 "2. Blue\n"
	 "3. Green\n"
	 "\nChoice (1-3) ? ");
  scanf("%d", &choice);
  
  if( (choice >= 1) && (choice <= 3) ){
    return choice;
  }else {
    return -1;
  }
}

int main(void){
  int val;
  do {
    val = show_menu();
  }while(val == -1);

  printf("Thanks!\n");
  return 0;
}
