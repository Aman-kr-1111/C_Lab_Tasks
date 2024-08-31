#include <stdio.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter string : ");
  gets(str1);

  char ch;
  printf("Enter remove character : ");
  scanf("%c", &ch);

  int j = 0;
  for (int i = 0; str1[i] != '\0'; i++)
  {
    if (str1[i] != ch)
    {
      str2[j++] = str1[i];
    }
  }
  str2[j] = '\0';

  printf("Resulting String is : %s", str2);
}
