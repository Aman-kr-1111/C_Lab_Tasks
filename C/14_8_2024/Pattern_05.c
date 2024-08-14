#include <stdio.h>
int main()
{
  int row, num = 1;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", j);
    }
    for (int k = i - 1; k >= 1; k--)
    {
      printf("%d ", k);
    }

    printf("%c", 10);
  }
  return 0;
}