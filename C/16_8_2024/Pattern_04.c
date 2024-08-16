#include <stdio.h>
int main()
{
  int row;
  printf("Enter number of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    for (int j = 1, num = i, k = 1; j <= row; j++)
    {
      printf("%d ", num <= row ? num++ : k++);
    }
    printf("%c", 10);
  }

  return 0;
}