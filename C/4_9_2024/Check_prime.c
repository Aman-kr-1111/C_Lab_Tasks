#include <stdio.h>
void check_Prime(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  check_Prime(num);

  return 0;
}
void check_Prime(int num)
{
  int flag = 1;
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      flag = 0;
      break;
    }
  }

  printf("%d is %s number", num, flag ? "a prime" : "not a prime");
}