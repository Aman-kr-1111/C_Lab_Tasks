#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isPalindromString(char[]);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  printf("%s is %s palindrome", str, isPalindromString(str) ? "a" : "not a");
  return 0;
}

bool isPalindromString(char str[])
{
  int i = 0, j = strlen(str) - 1;

  while (i < j)
  {
    if (str[i] != str[j])
    {
      return false;
    }
    i++;
    j--;
  }

  return true;
}