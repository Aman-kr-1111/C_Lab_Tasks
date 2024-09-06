#include <stdio.h>
void amicablePrint(int, int);
int checkAmicable(int);
int main()
{
  int start, end;
  printf("Enter starting number : ");
  scanf("%d", &start);
  printf("Enter ending number : ");
  scanf("%d", &end);

  amicablePrint(start, end);
  return 0;
}

void amicablePrint(int start, int end)
{
  for (int i = start; i <= end; i++)
  {
    int num = checkAmicable(i);
    if (i != num && i == checkAmicable(num))
    {
      printf("(%d, %d)\n", i, num);
    }
  }
}

int checkAmicable(int num)
{
  int sum = 0;
  for (int i = 1; i < num; i++)
  {
    if (num % i == 0)
    {
      sum += i;
    }
  }

  return sum;
}