#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  int length = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    length++;
  }

  int first = 0, last = length - 1, flag = 1;

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

  printf("%s is %s", str, (flag ? "a palindrome!!" : "not a palindrome!!"));

  return 0;
}