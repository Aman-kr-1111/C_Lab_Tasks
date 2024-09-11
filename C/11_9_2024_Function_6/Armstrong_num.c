#include <stdio.h>
#include <stdbool.h>
bool isArmstrong(int);
int countDigits(int);
int power(int, int);
int main()
{
  int start, end;
  printf("Enter starting range : ");
  scanf("%d", &start);
  printf("Enter ending range : ");
  scanf("%d", &end);
  printf("\nArmstrong numbers between 100 and 10000 are : ");
  for (int i = start; i <= end; i++)
  {
    if (isArmstrong(i))
    {
      printf("%d ", i);
    }
  }

  return 0;
}

bool isArmstrong(int num)
{
  int store_num = num, count = countDigits(num), sum = 0;
  while (num)
  {
    sum += power(num % 10, count);
    num /= 10;
  }
  return store_num == sum;
}
int countDigits(int num)
{
  int count = 0;
  while (num)
  {
    count++;
    num /= 10;
  }
  return count;
}
int power(int base, int exp)
{
  int power = 1;
  while (exp)
  {
    power *= base;
    exp--;
  }
  return power;
}