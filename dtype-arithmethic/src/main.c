#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>

int main() {
	printf("### [dtype-arithmethic] ###\n");
  char character = 'A';
  int integer = 10;
  float floating = 10.32;
  double doublePrecision = 29.123456;
  long longInteger = 1234567890;
  short shortInteger = 32767;
  bool booleanValue = true;

  // Parsing Data Types
  printf("Character: %c, Size: %lu bytes\n", character, sizeof(character));
  printf("Integer: %d, Size: %lu bytes, Min: %d, Max: %d\n", integer, sizeof(integer), INT_MIN, INT_MAX);
  printf("Flaot: %.2f, Size: %lu bytes, Min: %e, Max: %e\n", floating, sizeof(doublePrecision), FLT_MIN, FLT_MAX);
  printf("Double: %.6f, Size: %lu bytes, Min: %e, Max: %e\n", doublePrecision, sizeof(doublePrecision), DBL_MIN, DBL_MAX);
  printf("Long: %ld, Size: %lu bytes, Min: %ld, Max: %ld\n",longInteger, sizeof(longInteger), LONG_MIN, LONG_MAX);
  printf("Short: %d, Size: %lu bytes, Min: %d, Max: %d\n",shortInteger, sizeof(shortInteger), SHRT_MIN, SHRT_MAX);
  printf("Boolean: %d, Size: %lu bytes (true = 1, false = 0)\n", booleanValue, sizeof(booleanValue));
  
  // Arithmetic Operations
  int a = 15, b = 4;
  printf("\nInteger Arithmetic Operations\n");
  printf("Addition: %d + %d = %d\n", a, b, a + b);
  printf("Subtraction: %d - %d = %d\n", a, b, a - b);
  printf("Multiplication: %d * %d = %d\n", a, b, a * b);
  printf("Division: %d / %d = %d\n", a, b, a / b);
  printf("Modulus: %d %% %d = %d\n", a, b, a % b);

  float x = 5.5, y = 2.2;
  printf("\nFloating Point Arithmetic Operations\n");
  printf("Addition: %.3f + %.3f = %.3f\n", x, y, x + y);
  printf("Subtraction: %.3f - %.3f = %.3f\n", x, y, x - y);
  printf("Multiplication: %.3f * %.3f = %.3f\n", x, y, x * y);
  printf("Division: %.3f / %.3f = %.3f\n", x, y, x / y);

  int intValue = 7;
  float floatValue = 3.9;
  printf("Original int: %d, cast to float: %.2f\n", intValue, (float)intValue);
  printf("Original float: %.2f, Cast to int: %d\n", floatValue, (int)floatValue);
  printf("Expicit cast in division: %d / %d = %.2f (using (float) cast)\n", a, b, (float)(a / b));

  printf("\nBoolean Logic Demonstration:\n");
  bool boolA = true, boolB = false;
  printf("Boolean A: %d, Boolean B: %d\n", boolA, boolB);
  printf("A AND B: %d\n", boolA && boolB);
  printf("A OR B: %d\n", boolA || boolB);
  printf("NOT A: %d\n", !boolA);


  printf("\nPointer and Memory Address Demonstration:\n");
  int *intPtr = &integer;
  float *floatPtr = &floating;
  char *charPtr = &character;
  bool *boolPtr = &booleanValue;
  printf("Address of integer: %p, Value: %d, Pointer Size: %lu bytes\n", (void*)intPtr , *intPtr , sizeof(intPtr));
  printf("Address of float: %p, Value: %.2f, Pointer Size: %lu bytes\n", (void*)floatPtr , *floatPtr , sizeof(floatPtr));
  printf("Address of char: %p, Value: %c, Pointer Size: %lu bytes\n",(void*)charPtr , *charPtr , sizeof(charPtr));
  printf("Address of bool: %p, Value: %d, Pointer Size: %lu bytes\n", (void*)boolPtr, *boolPtr, sizeof(boolPtr));

  printf("\n\t** (Pointer size depends on system architecture: 4 bytes on a 32-bit system and 8 bytes on a 64-bit system.)");
  

	return 0;
}
