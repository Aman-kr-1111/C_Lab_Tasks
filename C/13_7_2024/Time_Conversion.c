#include <stdio.h>
int main()
{
  int num, second, hour, minute;
  printf("Enter your number in second : ");
  scanf("%d", &num);

  hour = num / 3600;
  minute = num % 3600 / 60;
  second = num % 3600 % 60;
  printf("%d seconds is equivalent to %d hours, %d minutes, and %d seconds", num, hour, minute, second);

  return 0;
}