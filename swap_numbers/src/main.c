#include <stdio.h>

int main() {
	printf("### [swap_numbers] ###\n\n");
  int a = 10, b = 20;
  printf("\tBefore swap: a = %d, b = %d\n", a, b);
  a = a + b;
  b = a - b; // b gets original value of a
  a = a - b; // a gets original value of b
  printf("\tAfter swap: a = %d, b = %d\n", a, b);

	return 0;

}
