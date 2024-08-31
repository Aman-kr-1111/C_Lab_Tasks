#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);

  int small = 0, capital = 0, digits = 0, special_chars = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if ((ch >= 'A' && ch <= 'Z'))
    {
      capital++;
    }
    else if ((ch >= 'a' && ch <= 'z'))
    {
      small++;
    }
    else if (ch >= '0' && ch <= '9')
    {
      digits++;
    }
    else
    {
      special_chars++;
    }
  }

  if (capital && small && digits && special_chars)
  {
    puts("String is matching to our cases!!!");
  }
  else
  {
    puts("String isn't matching to our cases!!!");
  }

  return 0;
}