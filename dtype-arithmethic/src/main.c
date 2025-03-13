#include <stdio.h>

int main() {
	printf("### [dtype-arithmethic] ###\n");
  char character = 'A';
  int integer = 10;
  float floating = 10.32;
  double doublePrecision = 29.123456;
  long longInteger = 1234567890;
  short shortInteger = 32767;

  // Parsing Data Types
  printf("Character: %c, Size: %lu bytes\n", character, sizeof(character));
  printf("Integer: %d, Size: %lu bytes\n", integer, sizeof(integer));
  printf("Flaot: %.2f, Size: %lu bytes\n", floating, sizeof(doublePrecision));
  printf("Double: %.6f, Size: %lu bytes\n", doublePrecision, sizeof(doublePrecision));
  printf("Long: %ld, Size: %lu bytes\n",longInteger, sizeof(longInteger));
  printf("Short: %d, Size: %lu bytes\n",shortInteger, sizeof(shortInteger));
  
  // Arithmetic Operations
  int a = 15, b = 4;
  printf("\nInteger Arithmetic Operations\n");
  printf("Addition: %d + %d = %d\n", a, b, a + b);
  printf("Subtraction: %d - %d = %d\n", a, b, a - b);
  printf("Multiplication: %d * %d = %d\n", a, b, a * b);
  printf("Division: %d / %d = %d\n", a, b, a / b);
  printf("Modulus: %d %% %d = %d\n", a, b, a % b);

  float x = 5.5, y = 2.2;
  printf("\nFloating Arithmetic Operations\n");
  printf("Addition: %.3f + %.3f = %.3f\n", x, y, x + y);
  printf("Subtraction: %.3f - %.3f = %.3f\n", x, y, x - y);
  printf("Multiplication: %.3f * %.3f = %.3f\n", x, y, x * y);
  printf("Division: %.3f / %.3f = %.3f\n", x, y, x / y);

	return 0;
}
