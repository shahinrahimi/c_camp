#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
  char name[50];
  int age;
  float gpa;
} Student;

Student *newstudent(const char *name, int age, float gpa) {
  
  Student *s = malloc(sizeof(Student));  // allocate memory on the heap
  if (s == NULL) {
    printf("Memory allocation failed!\n");
    return NULL;
  }
  strcpy(s->name, name);
  s->age = age;
  s->gpa = gpa;

  return s;

}

int addContact(Student *student){
  FILE *file = fopen("contacts.csv", "a"); // a as append
  if (file == NULL) {
    printf("failed to open file");
    return 1;
  }
  
  fprintf(file, "%s,%d,%f\n", student->name, student->age, student->gpa);

  fclose(file);

  return 0;
}

int listContacts(){
  FILE *file = fopen("contacts.csv", "r");
  if (file == NULL){
    printf("failed to open file");
    return 1;
  }
  char name[50];
  int age;
  float gpa;
  while (fscanf(file, "%[^,],%d,%f\n", name, &age, &gpa) == 3){
    printf("Name: %s, Age: %d, GPA: %f\n", name, age, gpa);
  }

  fclose(file);
  return 0;
}

int main() {
	printf("\nYour project [io-simple-contacts] creatd!\n");
  Student *s1 = newstudent("raptor", 38, 18.9);
  Student *s2 = newstudent("malte", 46, 2.4);
  if (s1) addContact(s1);
  if (s2) addContact(s2);
  listContacts();

  free(s1);
  free(s2);

	return 0;
}
