#include <stdio.h>
// #include <ncurses.h> // using instead of conio.h

int main() {
  float height, rad, vol;
  float pi = 3.1415;

  printf("Please enter height of the cylinder : ");
  scanf("%f", &height);
  printf("Please enter radius of the cylinder : ");
  scanf("%f", &rad);

  // Calculate
  vol = pi * height * rad * rad;

  printf("Volume of the cyliner = %.2f\n", vol);

  return 0;
}