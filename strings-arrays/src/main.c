#include <stdio.h>
#include <string.h>
void printArr (const char arry[], int lenght) {
  for (int i=0; i < lenght; i++) {
    printf("%c ",arry[i]);
  }
  printf("\n");
}
// modify array
void reverseString(char str[]) {
  int len = strlen(str);
  for (int i=0;i<len/2;i++){
    int reversedIndex = len - i - 1;
    // cant be swap like two numbers => overflow ASCII calculatioins.
    char temp = str[i];
    str[i] = str[reversedIndex];
    str[reversedIndex] = temp;
  }
}
  

int isPalindrome(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2;i++) {
    if (str[i] != str[len-1-i]) return 0;
  }
  return 1;
}
int main() {
	printf("#### [strings-arrays] ####\n");
  char myString[] = {'a', 'b', 'c', 'd'};
  printArr(myString, 4);
  reverseString(myString);
  printArr(myString, 4);
  char myName[] = "shahin";
  // using Null character as empty character 
  printf("My name is: %s", myName);
  printf("\nIs my name palindrome: %d", isPalindrome(myName));
  printf("\nIs \"sos\" palindrome: %d", isPalindrome("sos"));
  reverseString(myName);
  printf("\nMy name after reveresed: %s", myName);
	return 0;
}
