#include <stdio.h>

int main() {
  char input[5];

  printf("input : ");
  scanf("%s", input);

  printf("%c\n", input[0]);
  printf("%c\n", input[1]);
  printf("%c\n", input[2]);
  printf("%c\n", input[3]);
  printf("%c\n", input[4]);

  return 0;
}