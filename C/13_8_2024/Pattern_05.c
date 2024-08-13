#include <stdio.h>
int main()
{
  int row;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    int num1 = 0, num2 = 1, next_num;
    for (int j = 1; j <= i; j++)
    {
      printf("%d ", num1);
      next_num = num1 + num2;
      num1 = num2;
      num2 = next_num;
    }

    printf("%c", 10);
  }

  return 0;
}