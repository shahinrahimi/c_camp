#include <stdio.h>
int customStrLen(const char *str) {
  const char *ptr = str;
  // until the null character
  while(*ptr) {
    /*printf("%c", *(ptr + 1));*/
    /*printf("%s", ptr + 1); */
    ptr++;
  }
  return ptr - str;
}
int main() {
	printf("\n******* [string_pointers] *******\n");
  char str[] = "clang";
  char str2[] = {'c', 'l', 'a', 'n', 'g', '\0'};
  int size = customStrLen(str);
  int size2 = customStrLen(str2);
  printf("\nThe size of \"clang\" is: %d\n", size);
  printf("\nThe size of \"{'c', 'l', 'a', 'n', 'g', '\\0'}\" is: %d\n", size2);
	return 0;
}
