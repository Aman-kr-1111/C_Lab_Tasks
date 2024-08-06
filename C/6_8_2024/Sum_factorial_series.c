#include <stdio.h>
int main()
{
  int terms, fact = 1, sum = 0;
  printf("Enter the number of terms in the factorial series : ");
  scanf("%d", &terms);

  for (int i = 1; i <= terms; i++)
  {
    fact = 1;
    for (int j = 1; j <= i; j++)
    {
      fact *= j;
    }
    sum += fact;
  }

  printf("The sum of the factorial series up to %d terms is: %d", terms, sum);

  return 0;
}