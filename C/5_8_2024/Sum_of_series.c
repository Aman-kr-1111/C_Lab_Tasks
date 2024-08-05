#include <stdio.h>
int main()
{
  int num, sum = 0;
  printf("Enter number of terms : ");
  scanf("%d", &num);

  for (int i = 1; num > 0; i = i * 10 + 1)
  {
    sum += i;
    if (num == 1)
    {
      printf("%d", i);
      printf("\nThs sum is : %d", sum);
    }
    else
    {
      printf("%d + ", i);
    }
    num--;
  }

  return 0;
}