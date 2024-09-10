#include <stdio.h>
int getLength(char[]);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);
  printf("Length of the string : %d", getLength(str));
  return 0;
}
int getLength(char str[])
{
  int length = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    length++;
  }

  return length;
}