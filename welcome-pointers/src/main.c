#include <stdio.h>

int main() {
	printf("*&*&*&* [welcome-pointers] &*&*&*!\n");
  int var = 15;
  int *ptr = &var;
  printf("Value of x: %d with size of %lu bytes\n", var, sizeof(var));
  printf("Address of x: %p with size of %lu bytes\n", &var, sizeof(&var));
  printf("Pointer value (address stored in ptr): %p with size of %lu bytes\n", ptr,sizeof(ptr));
  printf("Value pointed by ptr: %d with size of %lu bytes\n", *ptr, sizeof(*ptr)); // Dereferencing

  printf("\nPointer Arithmetic");
  int arr[] = {10, 20, 30, 40, 50};
  int *ptr2 = arr;
  printf("\nArray {10, 20, 30, 40, 50};\n");
  printf("First element: %d\n", *ptr2);
  ptr2++;
  printf("Second element: %d\n", *ptr2);
  ptr2 += 2;
  printf("Fourth element: %d\n", *ptr2);
  ptr2 += 2;
  printf("Sixth element: %d\n", *ptr2);

  char str[] = "clang";
  char *ptrS = str;
  for (int c=0; c<sizeof(str); c++) {
    printf("\nThe %dth element is '%c'.", c, *ptrS);
    ptrS++;
  }

	return 0;
}

