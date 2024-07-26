#include <stdio.h>
int main()
{
  int day, year, month, week;
  printf("Enter your number in days : ");
  scanf("%d", &day);

  year = day / 365;
  day %= 365;
  month = day / 30;
  day %= 30;
  week = day / 7;
  day = day % 7;
  printf("%d Year,%d Month, %d Weeks, %d Days", year, month, week, day);
  return 0;
}