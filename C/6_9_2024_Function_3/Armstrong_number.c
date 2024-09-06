#include <stdio.h>
#include <math.h>
int check_armstrong(int);
void display(int, int);
int digit_count(int);
int main()
{
  int start, end;
  printf("Enter starting point : ");
  scanf("%d", &start);
  printf("Enter ending point : ");
  scanf("%d", &end);
  display(start, end);
  return 0;
}

void display(int start, int end)
{
  for (int i = start; i <= end; i++)
  {
    if (check_armstrong(i))
    {
      printf("%d ", i);
    }
  }
}

int check_armstrong(int num)
{
  int store_num = num, digit = digit_count(num), result = 0;

  while (num)
  {
    int rem = num % 10;
    result += pow(rem, digit);
    num /= 10;
  }
  return store_num == result;
}

int digit_count(int num)
{
  int digit = 0;
  while (num)
  {
    digit++;
    num /= 10;
  }
  return digit;
}