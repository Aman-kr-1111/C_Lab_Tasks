#include <stdio.h>
int main()
{
  int choice, no_cups, total_amount;
  char explore_ch;

again_start:
  puts("\nWelcome to our Tea Stall Counter! Our menu:");
  puts("1)Tea --------------------- Rs. 10");
  puts("2)Coffee ------------------ Rs. 20");
  puts("3)Cold coffee-------------------Rs.50");
  puts("4)Exit");
  printf("Choose by entering a number (1-4) : ");
  scanf("%d", &choice);

  if (choice >= 1 && choice <= 4)
  {
    if (choice == 1)
    {
      printf("How many cups of refreshing tea? : ");
      scanf("%d", &no_cups);

      if (no_cups > 0)
      {
        total_amount = 10 * no_cups;
      }
      else
      {
        puts("Invalid number of cups");
        goto end;
      }
    }
    else if (choice == 2)
    {
      printf("How many cups of aromatic coffee? : ");
      scanf("%d", &no_cups);
      if (no_cups > 0)
      {
        total_amount = 20 * no_cups;
      }
      else
      {
        puts("Invalid number of cups");
        goto end;
      }
    }
    else if (choice == 3)
    {
      printf("How many cups of chilled coffee? : ");
      scanf("%d", &no_cups);
      if (no_cups > 0)
      {
        total_amount = 50 * no_cups;
      }
      else
      {
        puts("Invalid number of cups");
        goto end;
      }
    }
    else
    {
      goto end;
    }
    puts("\n********** Bill **********");
    printf("Total for %d cup(s): Rs. %d.", no_cups, total_amount);

    printf("\nExplore more or finalize? (Type 'Y' for Yes or 'N' for No) : ");
    scanf(" %c", &explore_ch);
    if (explore_ch == 'Y' || explore_ch == 'y')
    {
      goto again_start;
    }
    else if (explore_ch == 'N' || explore_ch == 'n')
    {
      puts("Thank you for visiting! We look forward to serving you again soon!");
    }
  }
  else
  {
    puts("Wrong number input");
  }

end:

  return 0;
}
