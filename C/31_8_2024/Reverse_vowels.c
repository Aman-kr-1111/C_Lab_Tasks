#include <stdio.h>
#include <string.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  gets(str);

  int len = strlen(str);
  int end = len - 1;

  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
    {
      if (str[end] == 'A' || str[end] == 'a' || str[end] == 'E' || str[end] == 'e' || str[end] == 'I' || str[end] == 'i' || str[end] == 'O' || str[end] == 'o' || str[end] == 'U' || str[end] == 'u')
      {
        char temp = str[i];
        str[i] = str[end];
        str[end] = temp;
        end--;
      }
      else
      {
        i--;
        end--;
      }
    }
  }

  printf("Output : %s", str);

  return 0;
}