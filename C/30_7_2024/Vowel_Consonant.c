#include <stdio.h>
int main()
{
  char ch;
  printf("Enter your alphabets : ");
  scanf("%c", &ch);

  switch (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
  {
  case 1:
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a Vowel", ch);
      break;

    default:
      printf("%c is a constant", ch);
      break;
    }
    break;
  default:
    puts("Invalid character");
  }

  return 0;
}