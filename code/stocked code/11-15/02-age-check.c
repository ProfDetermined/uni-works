#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  int age;

  printf("Please Enter your age : ");
  scanf("%d", &age);

  printf("\nYou are ");

  if (age > 60) {
    printf("old.\n");
  } else if (age > 0 && age < 60) {
    printf("not old.\n");
  } else {
    printf("a bitch :D\n");
  }

  return 0;
}