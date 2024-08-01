#include <stdio.h>
int main()
{
  int id, pass;
  char name[50];

  printf("Enter your name : ");
  gets(name);
  printf("Enter your id : ");
  scanf("%d", &id);

  switch (id == 1001)
  {
  case 1:
    printf("Enter your password : ");
    scanf("%d", &pass);

    switch (pass == 1010)
    {
    case 1:
      printf("User name is %s", name);
      break;

    default:
      puts("Incorrect password");
      break;
    }
    break;

  default:
    puts("Incorrect Id");
    break;
  }
  return 0;
}