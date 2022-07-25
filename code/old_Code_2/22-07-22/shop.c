#include <stdio.h>
#include <stdlib.h>

int main() {
  char name[50], last[50];
  char id;
  int item[6];
  float sum=0;

  printf("Hiya! Please enter your name : ");
  scanf("%s", name);

  printf("Now your surname : ");
  scanf("%s", last);

  printf("\n\n");

  do {
    printf("A: Shokubotsu Soap 500ml\t\t350 THB * %d\n", item[0]);
    printf("B: Tsubaki Champoo 500ml\t\t499 THB * %d\n", item[1]);
    printf("C: Oral B Toothpaste 160ml\t\t170 THB * %d\n", item[2]);
    printf("D: Shokubotsu Face Washer 100ml\t\t120 THB * %d\n", item[3]);
    printf("E: Listerine MouthWasher 250ml\t\t125 THB * %d\n", item[4]);
    printf("F: Vaseline Skincare 600ml\t\t220 THB * %d\n", item[5]);
    printf("0: Exit");

    printf("\n\n");

    printf("Pick up Item : ");
    scanf("%s", &id);

    if(id == 'A' && id == 'a') {
      item[0]++;
    } else if(id == 'B' && id == 'b') {
      item[1]++;
    } else if(id == 'C' && id == 'c') {
      item[2]++;
    } else if(id == 'D' && id == 'd') {
      item[3]++;
    } else if (id == 'E' && id == 'e') {
      item[4]++;
    } else if (id == 'F' && id == 'f') {
      item[5]++;
    }

    printf("\n");
  } while(id != '0');

  sum = (item[0] * 350) + (item[1] * 499) + (item[2] * 170) + (item[3] * 120) + (item[4] * 125) + (item[5] * 220);
  sum = sum + (sum*0.07);

  printf("\n\n");
  printf("\t\tCalculated Price : %.2f", sum);
  
  return 0; 
}