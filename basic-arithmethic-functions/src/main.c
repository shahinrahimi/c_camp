#include <stdio.h>
int findLargest(int a, int b, int c) {
  int largest = a;
  if (b > largest) largest = b;
  if (c > largest) largest = c;
  return largest;
}
int isPrime(int num) {
  if (num < 2) return 0;
  for (int i = 2; i * i <= num; i++) {
    if (num % i == 0) return 0;
  }
  return 1;
}
int reverseNumber(int num) {
  int reversed = 0;
  while (num != 0) {
    reversed = 10 * reversed + num % 10;
    num /= 10;
  }
  return reversed;
}
unsigned long long factorial(int num) {
  if (num <= 1) return 1;
  return num * factorial(num-1);
}
int main() {
	printf("\n##### [basic-arithmethic-functions] #####\n");

  int max;
  max = findLargest(5 ,7, 9);
  printf("The largest number of three numbers is: %d\n", max);
  
  printf("is 0 is prime: %d\n", isPrime(0));
  printf("is 6 is prime: %d\n", isPrime(6));
  printf("is 1 is prime: %d\n", isPrime(1));
  printf("is 2 is prime: %d\n", isPrime(2));
  printf("is 23 is prime: %d\n", isPrime(23));
  

  printf("The revered number of 1234 is: %d\n", reverseNumber(1234));
  printf("The revered number of 4567 is: %d\n", reverseNumber(4567));
  printf("The revered number of 8796 is: %d\n", reverseNumber(8796));
  printf("The revered number of 1091267459 is: %d\n", reverseNumber(1091267459));
  
  printf("The factorial of 0 is: %llu\n", factorial(0));
  printf("The factorial of 4 is: %llu\n", factorial(4));
  printf("The factorial of 11 is: %llu\n", factorial(11));
  printf("The factorial of 20 is: %llu\n", factorial(20));
  
	return 0;
}
