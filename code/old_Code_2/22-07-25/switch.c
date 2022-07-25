#include <stdio.h>
#include <stdlib.h>

int main() {
  int d;
  printf("Enter number from 1 - 9 : ");
  scanf("%d", &d);

  switch (d) {
    case 1: puts("hiya");
            break;
    case 2: puts("hello");
            break;
    case 5: puts("ola");
            break;
    default: puts("Thats suck");
  }
  
  return 0; 
}