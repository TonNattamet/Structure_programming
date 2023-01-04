#include <stdio.h>

#define PI 3.1416

int main()

{

  float cylindrical_volume;

  float height;

  float radius;

  printf("Enter height and radius of the cylindrical in cm :");

  scanf("%F %F", &height, &radius);

  cylindrical_volume = (PI * height *radius * radius);

  printf("Volume of the cylinder is: %.1f", cylindrical_volume);

  return 0;

}