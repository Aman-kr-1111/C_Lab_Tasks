#include <stdio.h>
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string : ");
  scanf("%[^\n]s", &str1);

  printf("Enter 2nd string : ");
  scanf(" %[^\n]s", &str2);

  int len1 = 0, len2 = 0, flag = 1;
  for (int i = 0; str1[i] != '\0'; i++)
  {
    len1++;
  }
  for (int i = 0; str2[i] != '\0'; i++)
  {
    len2++;
  }

  if (len1 == len2)
  {
    for (int i = 0; str1[i] != '\0'; i++)
    {
      for (int j = i + 1; str1[j] != '\0'; j++)
      {
        if (str1[i] > str1[j])
        {
          char temp = str1[j];
          str1[j] = str1[i];
          str1[i] = temp;
        }

        if (str2[i] > str2[j])
        {
          char temp = str2[j];
          str2[j] = str2[i];
          str2[i] = temp;
        }
      }
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
      if (str1[i] != str2[i])
      {
        flag = 0;
        break;
      }
    }
  }

  printf("It's %s", flag ? "a Anagram" : "not a Anagram");

  return 0;
}