#include <stdio.h>
int main()
{
  int row, num;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    num = i;
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", num++);
    }

    printf("%c", 10);
  }

  return 0;
}