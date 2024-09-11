#include <stdio.h>
int largestEle(int[]);
void arrayInput(int[]);
int size;
int main()
{
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr[size];
  arrayInput(arr);
  printf("Largest element of array is : %d", largestEle(arr));
  return 0;
}
void arrayInput(int arr[])
{
  printf("Enter %d element in an array!!!\n", size);
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}
int largestEle(int arr[])
{
  int max = arr[0];
  for (int i = 1; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  return max;
}