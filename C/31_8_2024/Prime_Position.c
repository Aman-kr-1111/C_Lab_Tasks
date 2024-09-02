#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  gets(str);

  int len = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    len++;
  }

  for (int i = 2; i < len; i++)
  {
    int flag = 1;
    for (int j = 2; j <= i / 2; j++)
    {
      if (i % j == 0)
      {
        flag = 0;
        break;
      }
    }
    if (flag)
    {
      printf("%c", str[i]);
    }
  }

  return 0;
}