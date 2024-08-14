#include <stdio.h>
int main()
{
  int row;
  printf("Enter nuber of row : ");
  scanf("%d", &row);

  for (int i = 1; i <= row; i++)
  {
    int num = 1;
    for (int j = 1; j <= row; j++)
    {
      j <= row - i ? printf("    ") : printf("%4d", i * num++);
    }
    printf("%c", 10);
  }

  return 0;
}
