#include <stdio.h>
int WriteFile() {
  FILE *file = fopen("example.txt", "w");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  fprintf(file,"This is first line\n");
  fprintf(file, "This is second line and we are going to line 3\nYes we are at line 3 that's feel nice.");
  fclose(file);
  printf("Data written to example.txt\n");
  return 0;
}
int ReadFile() {
  FILE *file = fopen("example.txt", "r");
  if (file == NULL) {
    printf("Error opening file!\n");
    return 1;
  }
  char line[100]; // set max colnumber for each line
  char word[25];
  char chr;
  int counter = 0;
  printf("\nReading line by line:\n");
  while(fgets(line, sizeof(line), file)) {
    counter++;
    printf("%d - %s\n", counter, line);
  }

  // standard way to reset the file pointer to the begeining
  fclose(file);
  file = fopen("example.txt", "r");
  counter = 0;
  printf("\n Reading word by word:\n");
  // EOF return -1 => infinite loop
  while(fscanf(file, "%s", word) == 1) {
    counter++;
    printf("%d - %s\n",counter, word);
  }

  // alternative to reset the file pointer to the begeining without closing it
  rewind(file);
  counter = 0;
  while(fscanf(file, "%c", &chr) == 1) {
    counter++;
    if (counter % 10 == 0) printf("\n");
    printf("%d - %c\t",counter, chr);
  }
  
  fclose(file);

  return 0;

}
int main() {
	printf("\nIIIIOOOO [welcome-io] OOOOIIII\n");
  WriteFile();
  ReadFile();
	return 0;
}
