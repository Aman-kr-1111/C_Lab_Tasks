#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  printf("Before sorting the array : %s", str);
  for (int i = 0; str[i] != '\0'; i++)
  {
    for (int j = i + 1; str[j] != '\0'; j++)
    {
      if (str[i] < str[j])
      {
        char temp = str[j];
        str[j] = str[i];
        str[i] = temp;
      }
    }
  }

  printf("\nAfter sorting the array : %s", str);
  return 0;
}