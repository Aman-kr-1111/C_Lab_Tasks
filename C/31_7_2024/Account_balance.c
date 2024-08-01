#include <stdio.h>
int main()
{
  float amount, curr_bal;
  char op;

  printf("Enter your minimum balance : ");
  scanf("%f", &curr_bal);

  switch (curr_bal >= 2000)
  {
  case 1:
    printf("Enter your operation (d for deposit or w for withdrawal : ");
    scanf(" %c", &op);
    switch (op)
    {
    case 'd':
    case 'D':
      printf("How much amount want to deposit : ");
      scanf("%f", &amount);
      switch (amount > 0)
      {
      case 1:
        curr_bal += amount;
        printf("Current balance = %.2f", curr_bal);
        break;

      default:
        puts("Invalid input");
        break;
      }
      break;
    case 'w':
    case 'W':
      printf("How much amount want to withdrawl : ");
      scanf("%f", &amount);

      switch (amount > 0 && amount <= curr_bal-2000)
      {
      case 1:
        curr_bal -= amount;
        printf("Current balance = %.2f", curr_bal);
        break;
      default:
        puts("Invalid input");
        break;
      }
      break;
    default:
      puts("Invalid character");
      break;
    }
    break;

  default:
    puts("Ammount Can't be stored");
    break;
  }
  return 0;
}