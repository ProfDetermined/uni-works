#include <stdio.h>
#include <stdlib.h>

int main() {
  int sum=0, i=1;

  while (i<=100)
  {
    sum += i;
    i++;
  }
  
  printf("final summation = %d\n", sum);
  
  return 0; 
}