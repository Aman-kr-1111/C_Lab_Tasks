#include <stdio.h>
void arrayInput(int[], int);
void arrayOutput(int[], int);
int arraySum(int[], int);
int main()
{
  int size;
  printf("Enter size of array : ");
  scanf("%d", &size);
  int arr[size];
  arrayInput(arr, size);
  printf("Array elements : ");
  arrayOutput(arr, size);

  printf("Sum of array elements : %d", arraySum(arr, size));

  return 0;
}

int arraySum(int arr[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum += arr[i];
  }
  return sum;
}

void arrayInput(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}

void arrayOutput(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}