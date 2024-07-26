#include <stdio.h>
int main()
{
  char lowercase;
  printf("Enter a lowercase character : ");
  scanf("%c", &lowercase);
  printf("Uppercase equivalent : %c", lowercase - 32);
  return 0;
}