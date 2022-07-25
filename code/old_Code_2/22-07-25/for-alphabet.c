#include <stdio.h>
#include <stdlib.h>

int main() {
  char i;

  for(i='a'; i<='z'; i++) {
    printf("%c   ", i);
  }

  printf("\n");
  
  return 0; 
}