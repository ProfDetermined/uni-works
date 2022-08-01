#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  int z = 10;
  printf("memory address == %d\n", z);

  int *ptrZ;
  printf("memory address == %p\n", ptrZ);

  ptrZ = &z;
  printf("memory address == %p\n", ptrZ);

  return 0;
}