#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b) {
  int temp = *a; // storing value of a to remp // derefrencing
  *a = *b;
  *b = temp;
}

void reverseArray(int *arr, int size) {
  int *start = arr;
  int *end = arr + size - 1;
  while (end>start) {
    swap(start, end);
    start++;
    end--;
  }
}

int *createArray(int size) {
  int *arr = (int *)malloc(size * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return NULL;
  }
  for (int i = 0; i < size; i++){
    arr[i] = i * 2;
  }
  return  arr;

}
int main() {
	printf("##### [dynamic-memory-allocation] #####");
  int *arr;
  int n = 5;
  arr = (int *)malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  for (int i=0; i < n; i++){
    arr[i] = i + 1; // Assign values
  }
  printf("\nAssigned values are: ");
  for (int i=0; i < n; i++){
    printf("%d ", arr[i]);
  }

  int x = 5, y = 10;
  printf("\nBefore Swap: x = %d, y = %d\n", x, y);
  swap(&x, &y);
  printf("\nAfter Swap: x = %d, y = %d\n", x, y);
  free(arr);

  int n2 = 10;
  int *arr2 = createArray(n2);
  printf("\nOriginal Array: ");
  for (int i=0; i < n2; i++){
    printf("%d ", arr2[i]);
  }

  reverseArray(arr2, n2);
  printf("\nReveresed Array: ");
  for (int i=0;i < n2; i++){
    printf("%d ", arr2[i]);
  }

  free(arr2);

	return 0;
}
