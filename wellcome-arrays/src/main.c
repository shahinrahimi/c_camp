#include <stdio.h>

void testSize(int arry[]) {
  printf("Inside function - sizeof(arr): %lu\n", sizeof(arry));
}
int main() {
	printf("%%%% [wellcome-arrays] %%%%\n");
  int empty[] = {};
  int arr[] = {1,2,3,4,1};
  printf("Im main - sizeof(arr): %lu\n", sizeof(arr));
  testSize(arr);
  // array decoy to the pointers when passing to the functions 
  // so the sizeof not works as expexted
  // solution is to keep track of array lenght
  // same rule apply to defining and dynamically allocate using malloc 
  // int *arr = malloc(5*sizeof(int))
  // calculating length
  int length = sizeof(arr) / sizeof(arr[0]);
  printf("The size of array is: %d\n", length);
  int lenghtEmpty = sizeof(empty) / sizeof(empty[0]);
  printf("The size of empty array is: %d\n", lenghtEmpty);
	return 1;
}
