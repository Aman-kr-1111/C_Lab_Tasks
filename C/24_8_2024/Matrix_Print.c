#include <stdio.h>
int main()
{
  int row, col;
  printf("Enter number of rows : ");
  scanf("%d", &row);
  printf("Enter number of columns : ");
  scanf("%d", &col);

  int arr[row][col];
  printf("Enter the element in matrix!!\n");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("element - [%d][%d] : ", i, j);
      scanf("%d", arr[i][j]);
    }
  }

  printf("The matrix is : ");
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d ", arr[i][j]);
    }
  }

  return 0;
}