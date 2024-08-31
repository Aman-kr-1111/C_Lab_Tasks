#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);

  int idx = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    int count = 1;
    for (int j = i + 1; str[j] != '\0'; j++)
    {
      if (str[i] == str[j])
      {
        str[j] = ' ';
        count++;
      }
    }
    if (count != 1 && str[i] != ' ')
    {
      printf("%c%d", str[i], count);
    }
  }

  return 0;
}