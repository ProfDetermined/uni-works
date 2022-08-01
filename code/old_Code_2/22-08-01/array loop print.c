#include <stdio.h>
#include <ncurses.h> // using instead of conio.h

int main() {
  int integer[3] = {23, -186, 43};
  float not_int[5] = {0.98, 43.213, -3.47, 53.08, -0.987};
  char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
  char name[9] = {'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', '\0'};

  // Inteeger :D
  printf("Integer : ");
  for(int i=0; i<3; i++) {
    if(i == 2)
      printf("%d\n", integer[i]);
    else
      printf("%d, ", integer[i]);
  }

  // not that integer type
  printf("Float : ");
  for(int i=0; i<5; i++) {
    if(i == 4)
      printf("%.2f\n", not_int[i]);
    else
      printf("%.2f, ", not_int[i]);
  }

  // Eng Vowel
  printf("Vowel : ");
  for(int i=0; i<5; i++) {
    if(i == 4)
      printf("%c\n", vowel[i]);
    else
      printf("%c, ", vowel[i]);
  }

  // Echo that name :D
  printf("Name : ");
  for(int i=0; i<9; i++) {
    if(i == 8)
      printf("%c\n", name[i]);
    else
      printf("%c", name[i]);
  }
    
  
  return 0;
}