#include <stdio.h>
int main()
{
  int row;
  printf("Enter number of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1, num = 1; j <= 2 * i - 1; j++)
    {
      j % 2 == 0 ? printf("* ") : printf("%d ", num++);
    }
    printf("%c", 10);
  }

  return 0;
}