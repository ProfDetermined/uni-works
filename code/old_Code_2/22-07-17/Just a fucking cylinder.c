#include <stdio.h>

int main() {
  float height, radius, volume;
  float pi = 3.1415;

  printf("Enter Height : ");
  scanf("%f", &height);

  printf("Enter Radius : ");
  scanf("%f", &radius);

  volume = height * radius * radius * pi;

  printf("Volume of a cylinder is %.2f\n", volume);
  
  return 0;
}