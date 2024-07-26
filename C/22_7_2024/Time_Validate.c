#include <stdio.h>
int main()
{
  int hour, min;
  printf("Enter the hours (in 24-hour format) : ");
  scanf("%d", &hour);
  printf("Enter the minute : ");
  scanf("%d", &min);

  if (hour < 12)
  {
    printf("The time is %d:%d AM", hour, min);
  }
  else
  {
    printf("The time is %d:%d PM", hour, min);
  }

  return 0;
}