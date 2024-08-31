#include <stdio.h>
int main()
{
  char str[100], newStr[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  int idx = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ' ')
    {
      continue;
    }
    else
    {
      newStr[idx++] = str[i];
    }
  }

  newStr[idx] = '\0';
  printf("Output : %s", newStr);

  return 0;
}