#include <stdio.h>
void curr_bal();
void check_bal();
void withdraw_money();
void deposit_money();
int curr_amt = 2000, wdraw_amt, dept_amt;
int main()
{
  deposit_money();
  withdraw_money();
  withdraw_money();
  deposit_money();
  withdraw_money();
  check_bal();
  return 0;
}
void withdraw_money()
{
  printf("\n\nEnter withdraw amount : ");
  scanf("%d", &wdraw_amt);
  if (wdraw_amt > curr_amt)
  {
    printf("Insufficient Funds");
  }
  else if (wdraw_amt > 0)
  {
    printf("Withdrew : Rs.%d", wdraw_amt);
    curr_amt -= wdraw_amt;
    curr_bal();
  }

  else
  {
    printf("Invalid amount to deposit");
  }
}

void deposit_money()
{
  printf("\n\nEnter deposit amount : ");
  scanf("%d", &dept_amt);
  if (dept_amt > 0)
  {
    printf("Deposited : Rs.%d", dept_amt);
    curr_amt += dept_amt;
    curr_bal();
  }
  else
  {
    printf("Invalid amount to deposit");
  }
}
void curr_bal()
{
  printf("\nCurrent Balance : Rs.%d", curr_amt);
}
void check_bal()
{
  printf("\n\nCheck Balance\nCurrent Balance : Rs.%d", curr_amt);
}