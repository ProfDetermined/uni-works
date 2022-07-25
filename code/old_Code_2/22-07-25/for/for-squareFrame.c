#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n=0;

  printf("Enter Square size : ");
  scanf("%d", &n);

  printf("\n\n");

  for(i=0; i<n; i++) {
    for(j=0; j<n; j++) {

      if((i == 0) || (i == n-1)) {
        printf("*");
      } else {

        if ((j == 0) || (j == n-1)) {
          printf("*");
        } else {
          printf(" ");
        }
        
      }

    }
    printf("\n");
  }
  
  return 0; 
}