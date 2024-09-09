#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int);
int main()
{
  int year;
  printf("Enter year : ");
  scanf("%d", &year);

  printf("%d is %s year!!!", year, isLeapYear(year) ? "leap" : "not leap");
  return 0;
}
bool isLeapYear(int year)
{
  // By using ternary operator
  return year%100==0?(year%400==0?true:false):year%4==0?true:false;

  
  // 2nd method
  // if (year % 100 == 0)
  // {
  //   if (year % 400 == 0)
  //   {
  //     return true;
  //   }
  //   return false;
  // }
  // else if (year % 4 == 0)
  // {
  //   return true;
  // }
  // return false;
}