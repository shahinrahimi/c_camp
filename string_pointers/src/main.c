#include <stdio.h>
#include <stdlib.h>
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

char *concatenate(const char *str1, const char *str2){
  int size = customStrLen(str1) + customStrLen(str2) + 1; // including null character
  char *result = malloc(size * sizeof(char)); 
  if (!result) return NULL;
  
  char *ptr = result;
  const char *temp1 = str1;
  const char *temp2 = str2;
  while(*temp1) *ptr++ = *temp1++;
  while(*temp2) *ptr++ = *temp2++;
  *ptr = '\0'; // *temp1 or *temp2 will be correct but '/0' better for explicity
  return result;
}
int main() {
	printf("\n******* [string_pointers] *******\n");
  char str[] = "clang";
  char str2[] = {'c', 'l', 'a', 'n', 'g', '\0'};
  int size = customStrLen(str);
  int size2 = customStrLen(str2);
  printf("\nThe size of \"clang\" is: %d\n", size);
  printf("\nThe size of \"{'c', 'l', 'a', 'n', 'g', '\\0'}\" is: %d\n", size2);

  char myString[] = "clang";
  char myString2[] = "golang";
  printf("\nMy two strins are \"%s\" and \"%s\", after concatenation is: \"%s\"", myString, myString2, concatenate(myString, myString2));
	return 0;
}
