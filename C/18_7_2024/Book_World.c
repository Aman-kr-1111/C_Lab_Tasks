#include <stdio.h>
int main()
{
  float pa, disc, ta;
  printf("Enter purchase amount : ");
  scanf("%f", &pa);

  disc = pa > 1000 && pa <= 5000 ? pa * 0.05 : pa <= 1000 ? 0
  : pa * 0.1;

  ta = pa + disc;
  printf("Payable amount : %.2f", ta);
  return 0;
}