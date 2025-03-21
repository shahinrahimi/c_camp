#include <stdio.h>
typedef struct {
  char name[20];
  int age;
  float gpa;
} Student;

int addContact(Student *student) {
  FILE *file = fopen("contacts.bin", "ab");
  if (file == NULL) {
    printf("failed to open file");
    return 1;
  }

  fwrite(student,sizeof(Student) , 1, file);
  fclose(file);

  return 0;
}

int listContacts() {
  FILE *file = fopen("contacts.bin", "rb");
  if (file == NULL) {
    printf("failed to read file");
    return 1;
  }
  Student students[10];
  fread(students, sizeof(Student), 10, file);
  for (int i=0; i < sizeof(students) / sizeof(Student); i++) {
    printf("%d - Name: %s, Age: %d, GPA: %.3f\n", i, students[i].name, students[i].age, students[i].gpa);
  }

  return 0;

}



int main() {
	printf("0101000101010 [io-simple-contacts-bin-version] 0100010100010");
  
  Student students[3] = {
    {"raptor", 89 , 69.42},
    {"malte", 47, 65.64},
    {"garelt", 54, 1.45}
  };

  for (int i=0; i < sizeof(students) / sizeof(Student); i++) {
    if (addContact(&students[i]) == 1) printf("failed to write a contact to contacts.");
  }

  listContacts();

	return 0;
}
