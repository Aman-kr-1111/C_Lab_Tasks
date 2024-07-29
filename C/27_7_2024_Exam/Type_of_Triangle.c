#include <stdio.h>
int main()
{
  int s1, s2, s3;
  printf("Enter side1 : ");
  scanf("%d", &s1);
  printf("Enter side2 : ");
  scanf("%d", &s2);
  printf("Enter side3 : ");
  scanf("%d", &s3);

  if ((s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) && (s1 == s2 && s2 == s3))
  {
    printf("The triangle is an equilateral triangle.");
  }
  else if ((s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) && (s1 == s2 || s2 == s3 || s3 == s1))
  {
    printf("The triangle is an isosceles triangle.");
  }
  else if ((s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) && (s1 != s2 && s2 != s3 && s3 != s1))
  {
    printf("The triangle is a scalene triangle.");
  }
  else
  {
    printf("Sides aren't valid");
  }

  return 0;
}