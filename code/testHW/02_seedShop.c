#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  int seed[5] = {0,0,0,0,0};
  int allSeed[5] = {0,0,0,0,0};
  int day, list, ctm = 0, i, amount;
  char sInp;

  do {
    i=0;
    do {
      seed[i] = 0;
      i++;
    } while(i<5);

    do {
      printf("Welcome to Uncle Nhuad Seed Shop\n");
      printf("Pick your type of seed\n");
      printf("\ta. Rose apple : 150.00 THB x %d\n", seed[0]);
      printf("\tb. Mangosteen : 200.00 THB x %d\n", seed[1]);
      printf("\tc. Durian : 350.50 THB x %d\n", seed[2]);
      printf("\td. Jack Fruit : 180.00 THB x %d\n", seed[3]);
      printf("\te. Forest Tree : 3.50 THB x %d\n", seed[4]);

      printf("Pick your type of seed : ");
      scanf("%s", &sInp);

      printf("Enter your amount : ");
      scanf("%d", &amount);

      if ((sInp == 'a') || (sInp == 'A')) {
        seed[0] += amount;
        allSeed[0] += seed[0];
      } else if ((sInp == 'b') || (sInp == 'B')) {
        seed[1] += amount;
        allSeed[1] += seed[1];
      } else if ((sInp == 'c') || (sInp == 'C')) {
        seed[2] += amount;
        allSeed[2] += seed[2];
      } else if ((sInp == 'd') || (sInp == 'D')) {
        seed[3] += amount;
        allSeed[3] += seed[3];
      }else if ((sInp == 'e') || (sInp == 'E')) {
        seed[4] += amount;
        allSeed[4] += seed[4];
      }else {
        printf("Error! Please Try again~\n\n");
      }

      printf("Enter 0 to end this list : ");
      scanf("%d", &list);

      printf("\n\n");

    } while(list != 0);
    ctm += ctm;

    printf("\n\n");
    printf("\ta. Rose apple : %.2f\n", allSeed[0] * 150.00);
    printf("\tb. Mangosteen : %.2f\n", allSeed[1] * 200.00);
    printf("\tc. Durian : %.2f\n", allSeed[2] * 350.50);
    printf("\td. Jack Fruit : %.2f\n", allSeed[3] * 180.00);
    printf("\te. Forest Tree : %.2f\n", allSeed[4] * 3.50);
    printf("\n\n");

    printf("Enter 0 to end this day? : ");
    scanf("%d", &day);
    
  } while(day != 0); 

  return 0;
}