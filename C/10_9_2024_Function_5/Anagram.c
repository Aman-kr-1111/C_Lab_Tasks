#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isAnagram(char[], char[]);
void arraySort(char[], char[]);
int main()
{
  char str1[100], str2[100];
  printf("Enter 1st string : ");
  scanf("%[^\n]s", &str1);
  printf("Enter 2nd string : ");
  scanf(" %[^\n]s", &str2);

  printf("String %s anagrams",
         isAnagram(str1, str2) ? "are" : "aren't");
  return 0;
}
bool isAnagram(char str1[], char str2[])
{
  int len1 = strlen(str1);
  int len2 = strlen(str2);

  if (len1 == len2)
  {
    arraySort(str1, str2);
    for (int i = 0; str1[i] != '\0'; i++)
    {
      if (str1[i] != str2[i])
      {
        return false;
      }
    }
    return true;
  }
  return false;
}

void arraySort(char str1[], char str2[])
{
  for (int i = 0; str1[i] != '\0'; i++)
  {
    for (int j = i + 1; str1[j] != '\0'; j++)
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
}