#include <stdio.h>
void arrayInput(int[], int);
void result();
int largeElement(int[], int);
int max = 0;
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr[size];
  arrayInput(arr, size);
  max = largeElement(arr, size);
  result();
  return 0;
}
void arrayInput(int arr[], int size)
{
  printf("Enter %d elements : ", size);
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
}

int largeElement(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

void result()
{
  printf("The largest element is : %d", max);
}