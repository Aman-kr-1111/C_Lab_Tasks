#include <stdio.h>
#include <stdbool.h>
bool isContainsDigits(char[]);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);
  printf("String contains %s digit", isContainsDigits(str) ? "only" : "non");
  return 0;
}
bool isContainsDigits(char str[])
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= '0' && str[i] <= '9');
    else return false;
    
  }
  return true;
}
