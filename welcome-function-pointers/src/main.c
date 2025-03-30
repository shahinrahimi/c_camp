#include <stdio.h>
// function accepting a function pointer (callback)
void executeOperation(int a, int b, int (*operation)(int, int)) {
  printf("Result: %d\n", operation(a,b));
}

int add(int a, int b) {
  return a + b;
}
int multiply(int x, int y) {
  return x * y;
}

void greet() {
  printf("Hello, function-pointers\n");
}
int main() {
	printf("\nYour project [welcome-function-pointers] creatd!\n");

  void (*funcPtr)() = greet;
  funcPtr();

  executeOperation(3, 4, add);
  executeOperation(10, 3, multiply);
  return 0;
}
