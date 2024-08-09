#include <stdio.h>
int main()
{
  int rows, cols, even = 0;
  printf("Enter number of rows : ");
  scanf("%d", &rows);
  printf("Enter number of columns : ");
  scanf("%d", &cols);
  for (int i = 1; i <= rows; i++)
  {
    for (int j = 1; j <= cols; j++)
    {
      printf("%d ", even += 2);
    }
    printf("%c", 10);
  }

  return 0;
}