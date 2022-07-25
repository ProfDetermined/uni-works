#include <stdio.h>
#include <stdlib.h>

int main() {
  char i='a';

  while (i<='z') {
    printf("%c   ", i);
    i++;
  }

  printf("\n");
  
  return 0; 
}