#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

struct income {
  float mainIC, bonusIC;
  int age;
};


int main() {
  struct income somsri;

  somsri.mainIC = 18000.00;
  somsri.bonusIC = 30000.00;
  somsri.age = 23;

  printf("Income : %.2f\n", somsri.mainIC);
  printf("Bonus : %.2f\n", somsri.bonusIC);
  printf("Age : %d\n", somsri.age);

  return 0;
}