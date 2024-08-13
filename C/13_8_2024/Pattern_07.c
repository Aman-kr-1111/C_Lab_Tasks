#include <stdio.h>
int main()
{
  int row;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {

    for (int j = i; j >= 1; j--)
    {
      printf("%c ", 64 + j);
    }

    printf("%c", 10);
  }

  return 0;
}