#include <stdio.h>
int main()
{
    int quantity, price;

    printf("***** Welcome to Aman Bakery Shop *****\n\n");
    printf("Enter the quantity : ");
    scanf("%d", &quantity);
    printf("Enter the price of Chocolate Cake: ");
    scanf("%d", &price);

    printf("\nQuantity : %d", quantity);
    printf("\nPrice per item: %d", price);
    printf("\nTotal cost : Rs.%d", price * quantity);
    printf("\n\n******** Thank you for coming our shop ********");

    return 0;
}