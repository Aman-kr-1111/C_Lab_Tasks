#include <stdio.h>
int main()
{
  int s1, s2, s3, s4, s5;
  float avg;
  printf("Enter 1st subject marks : ");
  scanf("%d", &s1);
  printf("Enter 2nd subject marks : ");
  scanf("%d", &s2);
  printf("Enter 3rd subject marks : ");
  scanf("%d", &s3);
  printf("Enter 4th subject marks : ");
  scanf("%d", &s4);
  printf("Enter 5th subject marks : ");
  scanf("%d", &s5);

  avg = (s1 + s2 + s3 + s4 + s5) / 5.0;

  if (avg >= 90 && avg <= 100)
  {
    printf("Your grade is A");
  }
  else if (avg >= 80)
  {
    printf("Your grade is B");
  }
  else if (avg >= 70)
  {
    printf("Your grade is C");
  }
  else if (avg >= 50)
  {
    printf("Your grade is D");
  }
  else
  {
    printf("Your grade is F");
  }
  return 0;
}