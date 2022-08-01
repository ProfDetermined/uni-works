// So i still don't know what im wrong

#include <stdio.h>
#include <ncurses.h> // using instead of conio.h

#define size 3

int main() {
  int fateBox, i;
  int container[size];

  for(i=0; i<size; i++) {
    printf("Enter Number #%d : ", i+1);
    scanf("%d", &container[i]);
  }

  for(i=0; i<size-1; i++) {
    if(container[i] < container[i+1]) {
      fateBox = container[i+1];
      container[i+1] = container[i];
      container[i] = fateBox;
    }
  }

  printf("The maximum number = %d\n", container[0]);

  return 0;
}