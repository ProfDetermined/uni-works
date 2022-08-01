#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  int count = 15, y, z[10];

  int *ptr;
  printf("ptr memory add. = %p\n", ptr);

  ptr = &count;
  printf("ptr memory add. = %p\n", ptr);

  y = *ptr;
  printf("y memory add. = %p\n", &y);

  *ptr = 0;
  printf("ptr memory add. = %p\n", ptr);
  
  ptr = &z[0];
  printf("ptr memory add. = %p\n", ptr);

  return 0;
}