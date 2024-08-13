// 6
// 54
// 321

#include <stdio.h>
int main()
{
  int rows;
  printf("Enter number of rows : ");
  scanf("%d", &rows);
  int num = rows * (rows + 1) / 2;

  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", num--);
    }
    printf("\n");
  }

  return 0;
}