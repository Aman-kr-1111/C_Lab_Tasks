#include <stdio.h>
int main()
{
  int age;
  char nationality, gender;

  printf("Enter your nationality (I for Indian, i for Indian) : ");
  scanf("%c", &nationality);

  if (nationality == 'I' || nationality == 'i')
  {
    printf("Enter your gender (M for Male, F for Female) : ");
    scanf(" %c", &gender);
    if (gender == 'M' || gender == 'm')
    {
      printf("Enter your age : ");
      scanf("%d", &age);
      if (age >= 21 && age <= 50)
      {
        printf("Congratulations! You are eligible for marriage.");
      }
      else
      {
        printf("Sorry! you are not eligible for marriage.");
      }
    }
    else if (gender == 'F' || gender == 'f')
    {
      printf("Enter your age : ");
      scanf("%d", &age);
      if (age >= 18 && age <= 45)
      {
        printf("Congratulations! You are eligible for marriage.");
      }
      else
      {
        printf("Sorry! you are not eligible for marriage.");
      }
    }
    else
    {
      printf("Wrong gender input");
    }
  }
  else
  {
    printf("You aren't an Indian");
  }

  return 0;
}