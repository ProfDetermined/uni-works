#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n=0;

  printf("Enter Square size : ");
  scanf("%d", &n);

  printf("\n\n");

  i=0;

  do {
    j=0;

    do {
      printf("*");

      j++;
    } while (j<n);

    printf("\n");
    i++;
  } while (i<n);
  
  return 0; 
}