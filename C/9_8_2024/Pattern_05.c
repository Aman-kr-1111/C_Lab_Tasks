#include <stdio.h>
int main()
{
  int rows, cols;
  printf("Enter number of rows : ");
  scanf("%d", &rows);
  printf("Enter number of columns : ");
  scanf("%d", &cols);
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= cols; j++)
    {
      printf("%d ", j % 2 == 0 ? 0 : 1);
    }
    printf("%c", 10);
  }

  return 0;
}