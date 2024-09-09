#include <stdio.h>
#include <stdbool.h>
bool isEvenOrOdd(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  printf("%d is an %s number", num, isEvenOrOdd(num) ? "Even" : "Odd");

  return 0;
}
bool isEvenOrOdd(int num)
{
  return num % 2 == 0;
}