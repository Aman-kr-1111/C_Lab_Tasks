#include <stdio.h>
int main()
{
  int age;
  float height, pay_amount;
  char vip_pass;

  printf("Enter age : ");
  scanf("%d", &age);

  if (age <= 3 && age > 0)
  {
    pay_amount = 0;
  }
  else if (age > 3 && age <= 12)
  {
    pay_amount = 20;
  }
  else if (age > 12 && age <= 64)
  {
    pay_amount = 100;
  }
  else if (age > 64 && age <= 100)
  {
    pay_amount = 50;
  }
  else
  {
    puts("Invalid age");
    goto end;
  }

  printf("Enter height : ");
  scanf("%f", &height);
  if (height > 180 && height <= 500)
  {
    pay_amount += 50;
  }
  else if (height >= 120 && height <= 180)
  {
  }
  else if (height > 0 && height < 120)
  {
    pay_amount -= pay_amount * 0.5;
  }
  else
  {
    printf("Invalid height");
    goto end;
  }

  printf("Have you VIP pass (Y for Yes and N for NO): ");
  scanf(" %c", &vip_pass);
  if (vip_pass == 'Y' || vip_pass == 'y')
  {
    pay_amount -= pay_amount * 0.1;
  }
  else if (vip_pass == 'N' || vip_pass == 'n')
  {
  }
  else
  {
    puts("Invalid VIP pass input");
    goto end;
  }

  printf("Payable amount : %.2f", pay_amount);

end:
  return 0;
}