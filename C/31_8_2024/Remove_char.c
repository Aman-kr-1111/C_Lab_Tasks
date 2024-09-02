#include <stdio.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string : ");
  gets(str1);
  printf("Enter 2nd string : ");
  gets(str2);

  for (int i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] == str1[i + 1])
    {
      continue;
    }

    for (int j = 0; str2[j] != '\0'; j++)
    {
      if (str1[i] == str2[j])
      {
        str2[j] = ' ';
      }
    }
  }

  for (int i = 0; str2[i] != '\0'; i++)
  {
    if (str2[i] != ' ')
    {
      printf("%c", str2[i]);
    }
  }

  return 0;
}