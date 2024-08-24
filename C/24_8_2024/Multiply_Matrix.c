#include <stdio.h>
int main()
{
  // 1st matrix
  int row1, col1;
  printf("Enter 1st matrix row size: ");
  scanf("%d", &row1);
  printf("Enter 1st matrix column size : ");
  scanf("%d", &col1);

  int arr1[row1][col1];
  printf("Enter 1st matrix elements input!!\n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      printf("element - [%d][%d] : ", i, j);
      scanf("%d", &arr1[i][j]);
    }
  }

  // 2nd matrix
  int row2, col2;
  printf("\nEnter 2nd matrix row size: ");
  scanf("%d", &row2);
  printf("Enter 2nd matrix column size : ");
  scanf("%d", &col2);

  int arr2[row2][col2];
  printf("Enter 2nd matrix elements input!!\n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      printf("element - [%d][%d] : ", i, j);
      scanf("%d", &arr2[i][j]);
    }
  }

  // 1st matrix print
  printf("\nThe 1st matrix is : \n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      printf("%d ", arr1[i][j]);
    }
    printf("\n");
  }

  // 1st matrix print
  printf("\nThe 2nd matrix is : \n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      printf("%d ", arr2[i][j]);
    }
    printf("\n");
  }

  // Multiplication of two matrices
  int mul[row1][col1];
  printf("\nThe multiplication of two matrix is : \n");
  for (int i = 0; i < row1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      mul[i][j] = 0;
      for (int k = 0; k < row2; k++)
      {
        mul[i][j] += arr1[i][k] * arr2[k][j];
      }
      printf("%4d", mul[i][j]);
    }
    printf("\n");
  }

  return 0;
}