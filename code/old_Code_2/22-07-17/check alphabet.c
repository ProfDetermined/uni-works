#include <stdio.h>

int main() {
  char input[2];
  int i = 0;
  int count = 0;
  

  do{
    printf("input : ");
    scanf("%c", input);

    if (input == "a" || input == "e" || input == "i" || input == "o" || input == "u") {
      count = count+1;
      printf("\n");
    } else {
      printf("\n");
    }
    
    i++;
  } while (i < 5);

  printf("vowel == %d\n", count);
  printf("alphabet == %d\n", 20-count);

  return 0;
}