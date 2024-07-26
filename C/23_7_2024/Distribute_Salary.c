#include <stdio.h>
int main()
{
  float bs, ts, tax;
  int home_a = 10000, food_a = 3000, travel_a = 10000;
  char ch;

  printf("Enter your designation (D/d for Developer, T/t for Trainer, M/m for Manager) : ");
  scanf("%c", &ch);
  printf("Enter your salary : ");
  scanf("%f", &bs);

  if (ch == 'D' || ch == 'd')
  {
    printf("\nDesignation : %c", ch);
    ts = bs + home_a;
  }
  else if (ch == 'T' || ch == 't')
  {
    printf("\nDesignation : %c", ch);
    ts = bs + home_a + food_a;
  }
  else if (ch == 'M' || ch == 'm')
  {
    printf("\nDesignation : %c", ch);
    ts = bs + home_a + food_a + travel_a;
  }
  else
  {
    printf("\nDesignation : Invalid input");
  }

  if (ts > 40000)
  {
    tax = ts * 0.1;
  }
  else
  {
    tax = ts * 0.5;
  }

  printf("\nBase Salary : %.2f", bs);
  printf("\nTotal Salary : %.2f", ts);
  printf("\nTax : %.2f", tax);

  return 0;
}