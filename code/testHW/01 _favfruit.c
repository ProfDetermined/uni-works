#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h


int main() {
  int ctm = 0, i = 0, choice = 0;

  printf("Enter the number of customer : ");
  scanf("%d", &ctm);

  for(i = 0; i < ctm; i++) {
    printf("Welcome to Yindee fruit shop\n");
    printf("Plese choose the fruit from the following list (1-6)\n");
    printf("Press '1' for Durian\n");
    printf("Press '2' for Mangosteen\n");
    printf("Press '3' for Rambutan\n");
    printf("Press '4' for Long-Kong\n");
    printf("Press '5' for Mango\n");
    printf("Press '6' for Longan\n");
    
    printf("\n\nWhat is your favourite fruit? : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      printf("\n\nYour favorite fruit is Durian\n\n");
      break;

    case 2:
      printf("\n\nYour favorite fruit is Mangosteen\n\n");
      break;
    
    case 3:
      printf("\n\nYour favorite fruit is Rambutan\n\n");
      break;
    
    case 4:
      printf("\n\nYour favorite fruit is Long-Kong\n\n");
      break;

    case 5:
      printf("\n\nYour favorite fruit is Mango\n\n");
      break;
    
    case 6:
      printf("\n\nYour favorite fruit is Longan\n\n");
      break;

    default:
      printf("Error!! Please Try again!\n\n");
      i -= i;
      continue;
    }
  }

  return 0;
}