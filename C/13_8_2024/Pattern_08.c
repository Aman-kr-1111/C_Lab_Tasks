#include <stdio.h>
int main()
{
  int row;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    int num = i;
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", num);
      num += row - j;
    }

    printf("%c", 10);
  }

  return 0;
}