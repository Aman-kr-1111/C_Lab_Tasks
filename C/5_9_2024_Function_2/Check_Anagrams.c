#include <stdio.h>
#include <string.h>
void check_anagram(char[], char[]);
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string : ");
  scanf("%[^\n]s", str1);
  printf("Enter 2nd string : ");
  scanf(" %[^\n]s", str2);

  check_anagram(str1, str2);
  return 0;
}

void check_anagram(char str1[], char str2[])
{
  int len1 = strlen(str1), len2 = strlen(str2), flag = 1;
  if (len1 == len2)
  {
    // Sort string
    for (int i = 0; i < len1; i++)
    {
      for (int j = i + 1; j < len2; j++)
      {
        if (str1[i] > str1[j])
        {
          char temp = str1[i];
          str1[i] = str1[j];
          str1[j] = temp;
        }
        if (str2[i] > str2[j])
        {
          char temp = str2[i];
          str2[i] = str2[j];
          str2[j] = temp;
        }
      }
    }

    for (int i = 0; i < len1; i++)
    {
      if (str1[i] != str2[i])
      {
        flag = 0;
        break;
      }
    }
  }
  else
  {
    flag = 0;
  }

  printf("String are %s!!!", flag ? "anagrams" : "not anagrams");
}
