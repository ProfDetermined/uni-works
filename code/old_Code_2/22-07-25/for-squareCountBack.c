#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, n=0;

  printf("Enter Square size : ");
  scanf("%d", &n);

  printf("\n\n");

  for(i=n; i>0; i--) {
    for(j=n; j>0; j--) {
      printf("*");
    }
    printf("\n");
  }
  
  return 0; 
}