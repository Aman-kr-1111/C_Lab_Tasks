#include <stdio.h>
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr[size], sum = 0;

  for (int i = 0; i < size; i++)
  {
    printf("Enter %d element : ", i + 1);
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("Sum of all elements stored in the array is : %d", sum);

  return 0;
}