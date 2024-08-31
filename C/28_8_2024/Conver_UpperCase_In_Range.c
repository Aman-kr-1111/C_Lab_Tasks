#include <stdio.h>
int main()
{
  char str[100];
  printf("Enter a string : ");
  gets(str);

  int start, end;
  printf("Enter starting index : ");
  scanf("%d", &start);
  printf("Enter ending index : ");
  scanf("%d", &end);

  if (str[start] != '\0' && str[end] != '\0')
  {
    for (int i = start; i <= end; i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] -= 32;
      }
    }
    printf("%s", str);
  }
  else
  {
    printf("Index isn't avilable.");
  }

  return 0;
}