#include <stdio.h>
int main()
{
  int rows, cols, num;
  printf("Enter number of rows : ");
  scanf("%d", &rows);
  printf("Enter number of columns : ");
  scanf("%d", &cols);
  for (int i = rows; i >= 1; i--)
  {
    num = i;
    for (int j = 1; j <= cols; j++)
    {
      printf("%d ", num);
      num += cols;
    }
    printf("%c", 10);
  }

  return 0;
}