#include <stdio.h>
int main()
{
  int row, num = 1;
  printf("Enter number of row : ");
  scanf("%d", &row);

  // upper pattern
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%3d ", num++);
    }
    printf("%c", 10);
  }

  // Down pattern
  for (int i = row - 1; i >= 1; i--)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%3d ", num++);
    }
    printf("%c", 10);
  }

  return 0;
}