#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);

  int alphabets = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      alphabets++;
    }
  }

  printf("Alphabets : %d", alphabets);

  return 0;
}