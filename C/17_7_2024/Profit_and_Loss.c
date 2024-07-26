#include <stdio.h>
int main()
{
  float cp, sp;
  printf("Enter cost price : ");
  scanf("%f", &cp);
  printf("Enter selling price : ");
  scanf("%f", &sp);

  cp < sp &&printf("Profit : %.2f\n", sp - cp) && printf("Profit Percentage : %.2f%%", (sp - cp) * 100 / cp);

  sp < cp &&printf("Loss : %.2f\n", cp - sp) && printf("Loss Percentage : %.2f%%", (cp - sp) * 100 / cp);
  return 0;
}