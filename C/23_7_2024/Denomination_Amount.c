#include <stdio.h>
int main()
{
  int amount, five_hun, hun, fifty, twenty, ten, five, two, one;
  printf("Enter the amount : ");
  scanf("%d", &amount);
  int amount_copy = amount;

  five_hun = amount / 500;
  amount %= 500;
  hun = amount / 100;
  amount %= 100;
  fifty = amount / 50;
  amount %= 50;
  twenty = amount / 20;
  amount %= 20;
  ten = amount / 10;
  amount %= 10;
  five = amount / 5;
  amount %= 5;
  two = amount / 2;
  amount %= 2;
  one = amount / 1;
  amount %= 1;
  if (amount_copy > 0)
  {
    printf("\nRs. 500 notes : %d", five_hun);
    printf("\nRs. 100 notes : %d", hun);
    printf("\nRs. 50 notes : %d", fifty);
    printf("\nRs. 20 notes : %d", twenty);
    printf("\nRs. 10 coins : %d", ten);
    printf("\nRs. 5 coins : %d", five);
    printf("\nRs. 2 coins : %d", two);
    printf("\nRs. 1 coins : %d", one);
  }
  else
    printf("Invalid input");

  return 0;
}