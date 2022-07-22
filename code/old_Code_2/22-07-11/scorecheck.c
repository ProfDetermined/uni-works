#include <stdio.h>

int main() {
  char name[50], surname[50], id[9];
  float score, fullScore;

  printf("Enter ID : ");
  scanf("%s", id);

  printf("Enter name : ");
  scanf("%s", name);

  printf("Enter surname : ");
  scanf("%s", surname);

  printf("Enter score : ");
  scanf("%f", &score);

  printf("Enter fullScore : ");
  scanf("%f", &fullScore);

  printf("\n");
  printf("|=====================================================|\n");
  printf("\n");

  (((score / fullScore) * 100) >= 60) ? printf("    %s\n    %s %s\n    %.2f/%.2f\n    PASS\n\n", id, name, surname, score, fullScore) : printf("\n");

  return 0;
}