#include <stdio.h>
#include <ncurses.h>

int main() {
  char id[3][9];
  float score[3];

  for(int i=0; i<3; i++){
    printf("Getting #%d's id : ", i+1);
    scanf("%s", id[i]);

    printf("Getting #%d's score : ", i+1);
    scanf("%f", &score[i]);
    printf("\n==============================================================\n\n");
  }

  for (int i=0; i<3; i++){
    printf("%s : %.2f \n", id[i], score[i]);
  }
  
  return 0;
}