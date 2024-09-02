#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);

  if (str[0] >= 'a' && str[0] <= 'z') // hruthik
  {
    str[0] -= 32;
  }

  for (int i = 1; str[i] != '\0'; i++)
  {
    if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
    {
      str[i + 1] -= 32;
    }
  }
  printf("%s", str);

  return 0;
}