#include <stdio.h>
void cPrint(int value, int index, int counter, char method[]){
  printf("\nThe %d value at %d after %d tries. %s", value, index, counter, method);
}

int findIndexBruteForce(int values[],int length ,int value) {
  int result = -1;
  int counter = 0;
  for (int index=0; index < length; index++){
    counter++;
    if (value == values[index]){
      result = index;
      cPrint(value, result, counter, "[Brute Force]");
      return result;
    }
  }
  cPrint(value, result, counter, "[Brute Force]");
  

  return result;
}

int findIndexBinarySearch(int sortedValues[], int left, int right, int value, int counter){
  counter++;
  if (left > right) {
    cPrint(value, -1, counter, "[Binary Search]");
    return -1; // not found
  }
  
  int mid = left + ((right-left)/2);
  if (sortedValues[mid] == value) {
    cPrint(value,  mid, counter, "[Binary Search]");
    return mid;
  }
  
  if (sortedValues[mid] < value) {
    return findIndexBinarySearch(sortedValues, mid+1 , right, value, counter);
  } else {
    return findIndexBinarySearch(sortedValues, left, mid - 1, value, counter);
  }   
}

int main() {
	printf("12345678 [binary-search-on-sorted-array] 91011121");
  int sortedNumbers[] = {
    -9, -8, -7, -6, -5, -4, -3, -2, -1,  0,
    1,   2,  3,  4,  5,  6,  7,  8,  9, 10, 
    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
    31, 32, 33, 34, 35, 36, 37, 38, 39, 40
  };

  int size = sizeof(sortedNumbers)/sizeof(sortedNumbers[0]);
  printf("\nThe size of sorted numbers is: %d\n", size);

  findIndexBruteForce(sortedNumbers, size, 32);
  findIndexBinarySearch(sortedNumbers, 0, size-1, 32, 0);
  findIndexBruteForce(sortedNumbers, size, -10);
  findIndexBinarySearch(sortedNumbers, 0, size-1, -1, 0);

	return 0;
}
