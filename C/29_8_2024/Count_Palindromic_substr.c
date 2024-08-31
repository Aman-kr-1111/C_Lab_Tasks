#include <stdio.h>
int main()
{
  char str[100];
  int len = 0;
  printf("Enter string : ");
  scanf("%[^\n]s", str);
  for (; str[len] != '\0'; len++)
    ;

  int first = 0, last = len - 1, flag = 1;
  while (first < last)
  {
    if (str[first] != str[last])
    {
      flag = 0;
      break;
    }
    first++;
    last--;
  }

  if (flag)
  {
    first = 0, last = len - 1;
    while (first < last)
    {
      printf("Palindromic substring : ");
      for (int j = first; j <= last; j++)
      {
        printf("%c", str[j]);
      }
      printf("\n");
      first++;
      last--;
    }

    printf("Total palindromic substrings are : %d", len / 2);
  }
  else
  {
    printf("%s isn't a palidromic string!!!", str);
  }

  return 0;
}