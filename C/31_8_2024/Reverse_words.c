#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  gets(str);

  int len = 0, sIdx, lIdx, j;
  for (int i = 0; str[i] != '\0'; i++)
  {
    len++;
  }

  for (int i = 0; i < len; i++)
  {
    if (str[i] != ' ')
    {
      sIdx = i, j;
      for (j = sIdx; str[j] != ' ' && str[j] != '\0'; j++)
      {
      }
      lIdx = j - 1;
      for (int k = lIdx; k >= sIdx; k--)
      {
        printf("%c", str[k]);
      }
      printf(" ");
      i = lIdx;
    }
  }

  return 0;
}