#include <stdio.h>
void check_Even_Odd(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  check_Even_Odd(num);

  return 0;
}
void check_Even_Odd(int num)
{
  printf("%d is an %s", num, num % 2 == 0 ? "Even" : "Odd");
}