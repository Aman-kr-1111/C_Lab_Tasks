#include <stdio.h>
int main()
{
  int phy, chem, bio, math, com, percent;
  printf("Enter physics marks : ");
  scanf("%d", &phy);
  printf("Enter chemistry marks : ");
  scanf("%d", &chem);
  printf("Enter biology marks : ");
  scanf("%d", &bio);
  printf("Enter mathmatics marks : ");
  scanf("%d", &math);
  printf("Enter computer marks : ");
  scanf("%d", &com);

  percent = (phy + chem + math + bio + com) / 5;

  switch (percent)
  {
  case 90 ... 100:
    puts("Your grade is A");
    break;
  case 80 ... 89:
    puts("Your grade is B");
    break;
  case 70 ... 79:
    puts("Your grade is C");
    break;
  case 60 ... 69:
    puts("Your grade is D");
    break;
  case 40 ... 59:
    puts("Your grade is E");
    break;

  default:
    puts("Your grade is F");
    break;
  }
  return 0;
}