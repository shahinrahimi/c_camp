#include <stdio.h>
typedef struct {
  char street[50];
  char city[50];
  int zip;
} Address;
typedef struct {
  char name[50];
  int age;
  float gpa;
  Address addr;
} Student;

int main() {
	printf("\n{{{{ [welcome-struct] }}}}\n");
  Address a1 = {"123 Main St", "New York", 10001};
  Student s1 = {"Alice", 20, 3.8, a1};
  printf("Name: %s\nAge: %d\nGPA: %.2f\nStreet: %s\nCity: %s\nZip: %d\n", s1.name, s1.age, s1.gpa, s1.addr.street, s1.addr.city, s1.addr.zip);

	return 0;
}
