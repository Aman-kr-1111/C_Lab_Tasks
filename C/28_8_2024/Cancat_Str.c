#include <stdio.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string : ");
  gets(str1);
  printf("Enter 2nd string : ");
  gets(str2);

  int length = 0;
  for (int i = 0; str1[i] != '\0'; i++)
  {
    length++;
  }

  for (int i = 0; str2[i] != '\0'; i++)
  {
    str1[length++] = str2[i];
  }
  str1[length] = '\0';
  printf("%s", str1);
}
