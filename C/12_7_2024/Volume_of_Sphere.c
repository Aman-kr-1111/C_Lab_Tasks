#include <stdio.h>
int main()
{
  float radius, volume_of_sphere;
  printf("Enter the radius of the sphere : ");
  scanf("%f", &radius);
  volume_of_sphere = (4 * 3.14 * radius * radius * radius) / 3;
  printf("Volume of the sphere is : %.2f cubic units", volume_of_sphere);

  return 0;
}