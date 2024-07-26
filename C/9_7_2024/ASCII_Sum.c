#include <stdio.h>
int main()
{
  char ch1, ch2;
  printf("Enter first character : ");
  scanf("%c", &ch1);
  printf("Enter second character : ");
  scanf(" %c", &ch2);

  printf("ASCII value of %c is : %d", ch1, ch1);
  printf("\nASCII value of %c is : %d", ch2, ch2);
  printf("\nASCII sum of %c & %c is : %d", ch1, ch2, ch1 + ch2);

  return 0;
}