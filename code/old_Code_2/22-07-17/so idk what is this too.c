#include <stdio.h>

int main() {
  int a=4, b=5;


  (a>b) ? printf("hey a is greater than b\n") : (a<b) ? printf("hey b is greater than a\n") : printf("ah.. a is equal b");
  
  return 0;
}