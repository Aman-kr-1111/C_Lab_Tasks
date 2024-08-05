#include <stdio.h>
int main()
{
  float num, sum = 0;
  printf("Enter the value of n : ");
  scanf("%f", &num);

  printf("Harmonic Series : ");
  for (int i = 1; i <= num; i++)
  {
    if (i == 1)
    {
      sum += 1 / i;
      printf("%d ", i);
    }
    else if (i % 2)
    {
      sum += 1.0 / i;
      printf("+ 1/%d ", i);
    }
    else
    {
      sum -= 1.0 / i;
      printf("- 1/%d ", i);
    }
  }

  printf("\nSum of the series : %f", sum);

  return 0;
}