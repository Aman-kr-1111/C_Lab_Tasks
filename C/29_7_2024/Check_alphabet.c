#include <stdio.h>
int main()
{
  int ch;
  printf("Enter your character : ");
  scanf("%c", &ch);

  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    printf("%c is an alphabet", ch);
  }
  else
  {
    printf("%c isn't an alphabet", ch);
  }

  return 0;
}