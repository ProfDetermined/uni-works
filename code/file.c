#include <stdio.h>
#include <ncurses.h> // using instead of conio.h

int main () {
  char id;
  char name[20];
  float sale,free;

  printf ("Enter your id: ");
  scanf("%c", &id);

  printf ("Enter your Name: ");
  scanf("%s", name);

  printf ("Enter your sale: ");
  scanf("%f" ,&sale);

  if ((id=='S') || (id=='s')) {
    free = sale * (5/100);
  } else if ((id=='M') || (id=='m')) {
    free = sale * (7/100);
  } else if ((id=='L') || (id=='l')) {
    free = sale * (10/100);
  } else {
    printf ("Invalid Id");
  }

  printf  ("Name : %s\n", name);
  printf ("sale : %.2f\n", sale);
  printf  ("fee : %.2f\n", free);
  getch();

  return 0;
}