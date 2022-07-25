#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n=0;

  printf("Enter Square size : ");
  scanf("%d", &n);

  printf("\n\n");

  i=0;

  while (i<n) {
    j=0;
    while (j<n) {
      if((i == 0) || (i == n-1)) {
        printf("*");
      } else {
        if ((j==0) || (j == n-1)) {
          printf("*");
        } else {
          printf(" ");
        }
      }

      j++;
    }

    printf("\n");
    i++;
  }
  
  return 0; 
}