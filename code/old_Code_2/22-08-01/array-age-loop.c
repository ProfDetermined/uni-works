#include <stdio.h>
#include <ncurses.h> // using instead of conio.h

int main() {
  int age[20], i;

  for(i=0; i<3; i++) {
    printf("Enter your age : ");
    scanf("%d", &age[i]);
  }

  printf("\n------------------------------------------------------------------------------------------------------------------\n\n");

  for(i=0; i<3; i++) {
    printf("Age #%d :: %d\n", i+1, age[i]);
  }
  
  return 0;
}