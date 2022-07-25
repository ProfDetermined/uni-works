#include <stdio.h>
#include <stdlib.h>

int main() {
  char i='a';

  do {
    printf("%c   ", i);
    i++;
  } while (i<='z');

  printf("\n");
  
  return 0; 
}