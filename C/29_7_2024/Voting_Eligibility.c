#include <stdio.h>
int main()
{
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);

  if (age >= 18)
  {
    puts("You are eligible to vote.");
  }
  else
  {

    puts("You aren't eligible to vote.");
  }

  return 0;
}