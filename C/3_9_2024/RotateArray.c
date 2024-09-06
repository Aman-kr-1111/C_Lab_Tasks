#include <stdio.h>
void userInput(int *, int);
void printArray(int *, int);
void rotateArray(int *, int, int);
void reverseArray(int *, int, int);
int main()
{
  int size;
  printf("Enter array size : ");
  scanf("%d", &size);

  int arr[size];
  printf("Enter %d element in array!!!\n", size);
  userInput(arr, size);

  int pos;
  printf("Enter number of position to rotate : ");
  scanf("%d", &pos);

  printf("\nBefore reverse array : ");
  printArray(arr, size);

  rotateArray(arr, size, pos % size);
  printf("\nAfter reverse array : ");
  printArray(arr, size);
  return 0;
}

void userInput(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("element - %d : ", i);
    scanf("%d", &arr[i]);
  }
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", *(arr + i));
  }
}

void reverseArray(int *arr, int start, int end)
{
  while (start < end)
  {
    int temp = *(arr + end);
    *(arr + end) = *(arr + start);
    *(arr + start) = temp;
    start++;
    end--;
  }
}

void rotateArray(int *arr, int size, int pos)
{
  reverseArray(arr, 0, size - 1);
  reverseArray(arr, 0, pos - 1);
  reverseArray(arr, pos, size - 1);
}