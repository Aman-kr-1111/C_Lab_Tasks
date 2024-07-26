#include <stdio.h>
int main()
{
  int tea, coffee, biscuit, total_amount;
  scanf("%d%d%d", &tea, &coffee, &biscuit);
  total_amount = tea * 15 + coffee * 25 + biscuit * 10;
  printf("%d cups of tea\n", tea);
  printf("%d cups of coffee\n", coffee);
  printf("%d biscuit\n", biscuit);

  printf("Total Bill Amount : %d\n", total_amount);
  printf("\nThank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.");
  return 0;
}