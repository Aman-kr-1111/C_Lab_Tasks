#include <stdio.h>
#define pi 3.14f
int main()
{
  float height, radius, surface_area;

  printf("Enter cylinder height : ");
  scanf("%f", &height);
  printf("Enter cylinder radius : ");
  scanf("%f", &radius);
  surface_area = 2 * pi * radius * (radius + height);
  printf("Radius : %.2f\n", radius);
  printf("Height : %.2f\n", height);
  printf("Area of Cylinder : %.2f\n", surface_area);
  return 0;
}