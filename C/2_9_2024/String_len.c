#include <stdio.h>
int strLen(char *);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", str);

  printf("The length of the string is : %d", strLen(str));
  return 0;
}

int strLen(char *str)
{
  int idx = 0;
  while (str[idx++] != '\0')
    ;

  return idx - 1;
}