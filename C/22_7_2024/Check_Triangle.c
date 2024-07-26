#include <stdio.h>
int main()
{
  int s1, s2, s3;
  printf("Enter 1st side : ");
  scanf("%d", &s1);
  printf("Enter 2nd side : ");
  scanf("%d", &s2);
  printf("Enter 3rd side : ");
  scanf("%d", &s3);

  if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2)
  {
    printf("The triangle is valid.");
  }
  else
  {
    printf("The triangle isn't valid.");
  }

  return 0;
}