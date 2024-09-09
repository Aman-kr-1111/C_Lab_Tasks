#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  if (num > 1)
  {
    printf("%d is %s number", num, isPrime(num) ? "a prime" : "not a prime");
  }
  else
  {
    printf("%d isn't a prime number", num);
  }

  return 0;
}
bool isPrime(int num)
{
  bool flag = true;
  for (int i = 2; i <= num / 2; i++)
  {
    if (num % i == 0)
    {
      flag = false;
      break;
    }
  }
  return flag;
}