#include <stdio.h>
int main()
{
  int id;
  printf("Enter your id (11-23) : ");
  scanf("%d", &id);

  switch (id)
  {
  case 11 ... 15:
    puts("Software department");
    break;
  case 16 ... 20:
    puts("Developer department");
    break;
  case 21 ... 23:
    puts("Management department");
    break;

  default:
    puts("Invalid input");
    break;
  }
  return 0;
}