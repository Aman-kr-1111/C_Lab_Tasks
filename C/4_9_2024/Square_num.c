#include <stdio.h>
double square_Num(int);
int main()
{
  int num;
  printf("Enter number : ");
  scanf("%d", &num);

  printf("Square of %d is %.2lf", num, square_Num(num));

  return 0;
}

double square_Num(int num)
{
  return num * num;
}