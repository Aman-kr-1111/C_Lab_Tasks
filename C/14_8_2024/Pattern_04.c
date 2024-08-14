#include <stdio.h>
int main()
{
  int row, num = 1;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = i; j < row; j++)
    {
      printf("     ");
    }

    for (int k = 1; k <= i; k++)
    {
      printf("%5d", i * k);
    }

    printf("%c", 10);
  }
  return 0;
}