#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  int count = 15, y, z[10];

  int *ptr;
  printf("ptr memory add. = %p\n", ptr);
  printf("y memory add. = %p\n", &y);
 
  printf("\n");

  ptr = &count;
  printf("ptr memory add. = %p\n", ptr);

  printf("\n");

  y = *ptr;
  printf("y memory add. = %p\n", &y);
  printf("y value = %d\n", y);

  printf("\n");

  *ptr = 0;
  printf("ptr memory add. = %p\n", ptr);
  
  printf("\n");

  ptr = &z[0];
  printf("ptr memory add. = %p\n", ptr);
  printf("z memory add. = %p\n", &z);

  return 0;
}