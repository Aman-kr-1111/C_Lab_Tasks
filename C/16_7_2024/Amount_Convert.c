#include <stdio.h>
int main()
{
  float source_currency, rate, target_currency;
  printf("Enter the amount in the source currency : ");
  scanf("%f", &source_currency);
  printf("Enter the exchange rate (source to target) : ");
  scanf("%f", &rate);

  target_currency = source_currency * rate;
  printf("Equivalent amount in the target currency : %.2f", target_currency);
  return 0;
}