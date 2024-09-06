#include <stdio.h>
#include <string.h>
void check_palindrome(char[]);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  check_palindrome(str);
  return 0;
}

void check_palindrome(char str[100])
{
  int start = 0, end = strlen(str) - 1, flag = 1;
  while (start < end)
  {
    if (str[start] != str[end])
    {
      flag = 0;
      break;
    }
    start++;
    end--;
  }

  printf("%s is %s palindrome string!!!", str, flag ? "a" : "not a");
}
