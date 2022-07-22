#include <stdio.h>
#include <stdlib.h>

int main() {
  char name[50], surName[50];
  int seat, heightRange[3], i, height, zero=1;
  float money, sum = 0;

  i=0;

  do {
    printf("Enter name : ");
    scanf("%s", name);
    
    printf("Enter Surname : ");
    scanf("%s", surName);

    printf("Enter amount of your seat(s) : ");
    scanf("%d", &seat);

    if (i+seat > 32) {
      printf("\n\n\t\tError\n\n");
      exit(0);
    }

    printf("\n");

    for (int set = 0; set < seat; set++)
    {
      printf("Enter Height : ");
      scanf("%d", &height);

      if(height > 0 && height <= 100) {
        heightRange[0]++;
      } else if(height > 100 && height <= 130) {
        heightRange[1]++;
      } else if(height > 130) {
        heightRange[2]++;
      }

      printf("\n");
    }

    money = (heightRange[0] * 0) + (heightRange[1] * 350) + (heightRange[2] * 750);
    sum = sum + money;

    printf("|\t\t%s %s 's Pricing == %.2f\t\t|\n\n", name, surName, money);
    
    printf("Press '0' to stop program : ");
    scanf("%d", &zero);

    i = i + seat - 1;
    i++;

    if (zero == 0) {
      break;
    }
    printf("\n");
    printf("=============================================================");
    printf("\n");
  } while(i <= 32);

  printf("Final income == %.2f\n", sum);
  
  return 0; 
}