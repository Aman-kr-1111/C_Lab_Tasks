//  A  B  C  D  E
//      A  B  C  D
//           A  B  C
//               A  B
//                   A

#include <stdio.h>
int main()
{
  int row;
  printf("Enter number of row : ");
  scanf("%d", &row);

  for (int i = row; i >= 1; i--)
  {
    for (int j = 1; j <= row; j++)
    {
      if (j <= i)
      {
        printf("%c ", 64 + j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("%c", 13);
  }

  return 0;
}