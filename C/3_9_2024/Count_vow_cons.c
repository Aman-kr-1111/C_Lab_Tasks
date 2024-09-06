#include <stdio.h>
void count_vow_cons(char *);
int main()
{
  char str[100];
  printf("Enter string : ");
  scanf("%[^\n]s", &str);

  count_vow_cons(str);

  return 0;
}

void count_vow_cons(char *ch)
{
  int vow = 0, cons = 0;
  for (int i = 0; *(ch + i) != '\0'; i++)
  {
    if ((*(ch + i) >= 'A' && *(ch + i) <= 'Z') || (*(ch + i) >= 'a' && *(ch + i) <= 'z'))
    {
      if (*(ch + i) == 'A' || *(ch + i) == 'a' || *(ch + i) == 'E' || *(ch + i) == 'e' || *(ch + i) == 'I' || *(ch + i) == 'i' || *(ch + i) == 'O' || *(ch + i) == 'o' || *(ch + i) == 'u' || *(ch + i) == 'u')
      {
        vow++;
      }
      else
      {
        cons++;
      }
    }
  }

  printf("Vowels = %d\nConsonants = %d", vow, cons);
}
