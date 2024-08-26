#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);
  int i;
  for (i = 0; str[i] != '\0'; i++)
  {
  }
  int length = i - 1;

  for (int j = 0; j < length; j++)
  {
    for (int k = j + 1; k <= length; k++)
    {
      if (str[j] > str[k])
      {
        char temp = str[k];
        str[k] = str[j];
        str[j] = temp;
      }
    }
  }

  printf("After sorting : %s", str);

  return 0;
}