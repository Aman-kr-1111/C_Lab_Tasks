#include <stdio.h>
void arrayInput(int[], int);
void arrayDisplay(int[], int);
void arraySwapping(int[], int[], int);
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);
  int arr1[size], arr2[size];
  printf("Enter elements in 1st array : ");
  arrayInput(arr1, size);
  printf("Enter elements in 2nd array : ");
  arrayInput(arr2, size);

  printf("Before swapping array!!!");
  printf("\nFirst array : ");
  arrayDisplay(arr1, size);
  printf("\nSecond array : ");
  arrayDisplay(arr2, size);

  arraySwapping(arr1, arr2, size);

  printf("\nAfter swapping array!!!");
  printf("\nFirst array : ");
  arrayDisplay(arr1, size);
  printf("\nSecond array : ");
  arrayDisplay(arr2, size);
  return 0;
}
void arrayInput(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    scanf("%d", &arr[i]);
  }
}
void arrayDisplay(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
}
void arraySwapping(int arr1[], int arr2[], int size)
{
  for (int i = 0; i < size; i++)
  {
    int temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}