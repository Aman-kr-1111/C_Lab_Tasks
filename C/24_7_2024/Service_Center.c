#include <stdio.h>
int main()
{
  int vec_type, vec_age, prob_type, no_tyre, bill = 0;
  char name[50], vec_name[100];

  printf("Enter your name : ");
  gets(name);
  printf("Enter your vehicle name : ");
  gets(vec_name);
  printf("Enter your vehicle type (2 for 2-wheeler,3 for 3-wheeler, 4 for 4-wheeler) : ");
  scanf("%d", &vec_type);

  if (vec_type >= 2 && vec_type <= 4)
  {
    printf("Enter your vehicle age of your vehicle (in months) : ");
    scanf("%d", &vec_age);

    if (vec_age > 8)
    {
      puts("\nEnter 1 for tyre problem");
      puts("Enter 2 for fuel problem");
      puts("Enter 3 for engine issue");
      puts("Enter 4 for general services");
      scanf("%d", &prob_type);

      if (prob_type == 1)
      {
        printf("How many tyres you are facing the issue ? : ");
        scanf("%d", &no_tyre);

        if (no_tyre >= 1 && no_tyre <= vec_type)
        {
          bill = no_tyre * 400;
          printf("\n********** Bill **********");
          printf("\nName of the owner : %s", name);
          printf("\nName of the vehicle : %s", vec_name);
          printf("\nIssue : Tyre problem");
          printf("\nBill : %d", bill);
        }
        else
        {
          puts("Wrong number of tyres");
        }
      }
      else if (prob_type == 2)
      {
        bill = 1500;
        printf("\n********** Bill **********");
        printf("\nName of the owner : %s", name);
        printf("\nName of the vehicle : %s", vec_name);
        printf("\nIssue : Fuel problem");
        printf("\nBill : %d", bill);
      }
      else if (prob_type == 3)
      {
        bill = 5000;
        printf("\n********** Bill **********");
        printf("\nName of the owner : %s", name);
        printf("\nName of the vehicle : %s", vec_name);
        printf("\nIssue : Engine issue");
        printf("\nBill : %d", bill);
      }
      else if (prob_type == 4)
      {
        bill = 1000;
        printf("\n********** Bill **********");
        printf("\nName of the owner : %s", name);
        printf("\nName of the vehicle : %s", vec_name);
        printf("\nIssue : General services");
        printf("\nBill : %d", bill);
      }
      else
      {
        printf("Wrong input for issue");
      }
    }
    else
    {
      printf("Your vehicle service will done after a while.");
    }
  }
  else
  {
    printf("This service center isn't accepting other than (2-wheeler,3-wheeler and 4-wheeler).");
  }
  return 0;
}