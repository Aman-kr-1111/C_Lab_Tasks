#include <stdio.h>
int main()
{
  int sc1, sc2;
  char n1[50], n2[50];
  puts("Input for 1st person");
  printf("Enter your name : ");
  scanf("%[^\n]", n1);
  printf("Enter your game score : ");
  scanf("%d", &sc1);

  puts("\nInput for 2nd person");
  printf("Enter your name : ");
  scanf(" %[^\n]", n2);
  printf("Enter your game score : ");
  scanf("%d", &sc2);

  switch (sc1 > sc2)
  {
  case 1:
    printf("%s is win from %d points", n1, sc1 - sc2);
    break;

  case 0:
    switch (sc1 == sc2)
    {
    case 1:
      printf("Match is tie");
      break;

    default:
      printf("%s is win from %d points", n2, sc2 - sc1);
      break;
    }
  }
  return 0;
}