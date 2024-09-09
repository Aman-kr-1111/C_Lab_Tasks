#include <stdio.h>
int square_num(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  printf("Square of %d is %d", num, square_num(num));

  return 0;
}

int square_num(int num)
{
  return num * num;
}