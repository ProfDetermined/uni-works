#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum=0, i=1;

  do {
    sum += i;
    i++;
  } while (i<=100);
  
  printf("final summation = %d\n", sum);
  
  return 0; 
}