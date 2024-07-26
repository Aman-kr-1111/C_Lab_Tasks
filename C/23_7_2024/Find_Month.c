#include <stdio.h>
int main()
{
  int m;
  printf("Enter month number (1-12) : ");
  scanf("%d", &m);

  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
  {
    printf("Number of days : 31");
  }
  else if (m == 4 || m == 6 || m == 9 || m == 11)
  {
    printf("Number of days : 30");
  }
  else if (m == 2)
  {
    printf("Number of days : 28 or 29");
  }
  else
  {
    printf("Invalid input");
  }

  return 0;
}