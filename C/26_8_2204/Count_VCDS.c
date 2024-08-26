#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);

  int vowels = 0, consonants = 0, digits = 0, special_chars = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    char ch = str[i];
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
      if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'i' || ch == 'I' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
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

  printf("\nVowels : %d", vowels);
  printf("\nconsonants : %d", consonants);
  printf("\nDigits : %d", digits);
  printf("\nSpecial Characters : %d", special_chars);

  return 0;
}