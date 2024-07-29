#include <stdio.h>
int main()
{
  int day;
  printf("Enter week number (1-7) : ");
  scanf("%d", &day);

  if (day == 1)
    puts("Monday");
  else if (day == 2)
    puts("Tuesday");
  else if (day == 3)
    puts("Wednesday");
  else if (day == 4)
    puts("Thursday");
  else if (day == 5)
    puts("Friday");
  else if (day == 6)
    puts("Saturday");
  else if (day == 7)
    puts("Sunday");
  else
    puts("Invalid input! Please enter week number between 1 and 7.");

  return 0;
}