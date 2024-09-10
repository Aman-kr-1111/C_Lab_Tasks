#include <stdio.h>
int arraySum(char[]);
int main()
{
  char arr[100];
  printf("Enter array element : ");
  scanf("%[^\n]s", &arr);
  printf("Sum : %d", arraySum(arr));
  return 0;
}

int arraySum(char arr[])
{
  int sum = 0;
  for (int i = 0; arr[i] != '\0'; i++)
  {
    if (arr[i] >= '0' && arr[i] <= '9')
    {
      int j = i, num = 0;
      while (arr[j] != ' ' && arr[j] != '\0')
      {
        if (arr[j] >= '0' && arr[j] <= '9')
        {
          num = num * 10 + (arr[j] - '0');
        }
        j++;
      }
      sum += num;
      i = j - 1;
    }
  }
  return sum;
}