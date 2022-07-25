#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n=0;

  printf("Enter Square size : ");
  scanf("%d", &n);

  printf("\n\n");

  i = n;

  while(i>0) {
    j = n;

    while (j>0) {
      printf("*");
      j--;
    }
    
    printf("\n");
    i--;
  }
  
  return 0; 
}