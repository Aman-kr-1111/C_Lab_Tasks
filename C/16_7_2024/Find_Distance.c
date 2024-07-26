#include <stdio.h>
int main()
{
  float u, a, t, d;
  printf("Enter the initial velocity (m/s): ");
  scanf("%f", &u);
  printf("Enter the acceleration (m/s^2)(m/s): ");
  scanf("%f", &a);
  printf("Enter the time (s): ");
  scanf("%f", &t);

  d = u * t + 1 * a * t * t / 2;
  printf("The distance traveled is %.2f meters.", d);
  return 0;
}