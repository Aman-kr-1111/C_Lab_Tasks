#include <stdio.h>
int main()
{
  float total_cost, disc;
  int qty, age, ticket_price = 300;
  printf("Enter your age : ");
  scanf("%d", &age);
  printf("Enter quantity of ticket : ");
  scanf("%d", &qty);

  disc = age >= 60 && age <= 100 ? qty * 0.2 * ticket_price : 0;

  total_cost = qty * ticket_price - disc;
  printf("\nYour age : %d\n", age);
  printf("Every ticket price : %d\n", ticket_price);
  printf("Total ticket price : %d\n", ticket_price * qty);
  printf("Discount : %.2f\n", disc);
  printf("Your payable amount : %.2f\n", total_cost);

  return 0;
}