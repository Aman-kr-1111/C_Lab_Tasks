#include <stdio.h>
int main()
{
  int time;
  printf("Enter your time(24 hours format) : ");
  scanf("%d", &time);

  if (time >= 0 && time <= 12)
  {
    printf("Good Morning");
  }

  if (time > 12 && time <= 16)
  {
    printf("Good Afternoon");
  }
  if (time > 16 && time <= 18)
  {
    printf("Good Evening");
  }
  if (time > 18 && time <= 24)
  {
    printf("Good Night");
  }

  return 0;
}