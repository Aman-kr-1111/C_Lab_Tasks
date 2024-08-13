#include <stdio.h>

int main()
{
  int rows = 4;

  for (int i = 1; i <= rows; i++)
  {
    int num = i * (i - 1) / 2 + 1; 
    for (int j = 1; j <= i; j++)
    {
      printf("%d", num++);
    }
    printf("\n");
  }

  return 0;
}
