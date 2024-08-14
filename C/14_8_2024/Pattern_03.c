#include <stdio.h>
int main()
{
  int row, num = 1;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= row; j++)
    {
      if (j <= row - i)
        printf("     ");
      else
      {
        printf("%5d", num * num);
        num++;
      }
    }
    printf("%c", 10);
  }
  return 0;
}