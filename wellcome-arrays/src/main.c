#include <stdio.h>

void testSize(int arry[]) {
  printf("Inside function - sizeof(arr): %lu\n", sizeof(arry));
}
// passing arry to fucntion without modifying it using const!
void printArr(const int arry[], int lengthArr) {
  for (int i=0; i < lengthArr; i++) {
    printf("%d ", arry[i]);
    // on comment to see the error
    /*arr[i] = 0;*/
  }
}
// must specify the second length
void print2DArr(const int arry[][3], int rows, int cols) {
  for (int r = 0; r < rows; r++ ) {
    printf("\n");
    for (int c = 0; c < cols; c++) {
      printf("%d ", arry[r][c]);
    }
  }
}
void modifyArray(int arry[], int lengthArr) {
  for (int i=0; i < lengthArr; i++) {
    arry[i] *= 2;
  }
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

  // by auto decoying arrays to pointers
  // this enable the functions edit the arrays
  printf("Before modification: ");
  printArr(arr, length);
  modifyArray(arr,length);
  printf("\nAfter modification: ");
  printArr(arr,length);

  // for 2D must specify the second dimenstion when passing them to a function
  // 
  int matrix[2][3] = {{1,2,3,9999999},{4,5,6},{7,8,9},{0,0,0}};
  print2DArr(matrix,3,3);

  
	return 1;
}



