#include <stdio.h>
int main()
{
  char str[100], freq[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  for (int i = 0; str[i] != '\0'; i++)
  {
    int count = 1;
    for (int j = i + 1; str[j] != '\0'; j++)
    {
      if (str[i] == str[j])
      {
        freq[j] = '1';
        count++;
      }
    }
    if (freq[i] != '1')
    {
      printf("The frequency of %c is %d\n", str[i], count);
    }
  }

  return 0;
}