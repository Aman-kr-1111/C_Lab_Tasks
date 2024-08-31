#include <stdio.h>
int main()
{
  char str[100];
  int len = 0;
  printf("Enter string : ");
  scanf("%[^\n]s", str);
  for (; str[len] != '\0'; len++)
    ; // Length of string

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

  printf("%s is %s palindrome string!!!", str, flag ? "a" : "not a");
  return 0;
}