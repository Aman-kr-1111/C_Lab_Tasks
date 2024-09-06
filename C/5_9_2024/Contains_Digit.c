#include <stdio.h>
#include <string.h>
void checkStringContain(char[]);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);

  checkStringContain(str);
  return 0;
}

void checkStringContain(char str[])
{
  int len = strlen(str), flag = 1;

  for (int i = 0; i < len; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
    }
    else
    {
      flag = 0;
      break;
    }
  }

  printf("%s contains %sdigits", str, flag ? "only " : "non-");
}