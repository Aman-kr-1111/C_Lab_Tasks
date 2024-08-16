#include <stdio.h>
int main()
{
  int row;
  printf("Enter number of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    int num = i;
    for (int j = 1; j <= row; j++)
    {
      printf("%d ", j <= i - 1 ? 0 : num);
      num++;
    }
    printf("%c", 10);
  }

  return 0;
}