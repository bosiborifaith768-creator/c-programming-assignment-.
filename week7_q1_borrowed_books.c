#include <stdio.h>

int main(void) {
	FILE *file;
	char title[100];
	
	file = fopen("borrowed_books.txt", "a");
	
	if (file == NULL) {
		printf("Error opening file.\n");
		return 1;
	}
	
	printf("Enter book title: ");
	fgets(title, sizeof(title), stdin);
	
	fprintf(file, "%s", title);
	
	printf("Book title stored successfully.\n");
	
	fclose(file);
	
	return 0;
}