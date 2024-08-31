#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);

  int sum = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= '0' && str[i] <= '9')
    {
      sum += str[i] - 48;
    }
  }

  printf("Sum of the numbers : %d", sum);

  return 0;
}