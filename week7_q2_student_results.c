#include <stdio.h>
struct Student {
	char name[50];
	int regNo;
	float marks;
};

int main(void) {
	FILE *file;
	struct Student s;
	
	file = fopen("results.dat", "rb");
	
	if (file == NULL) {
		printf("Error opening file \n");
		return 1;
	}
	
	while (fread(&s, sizeof(s), 1, file)) {
		printf("Name: %s, Marks: %.2f\n",s.name, s.marks);
	}
	
	fclose(file);
		return 0;
}

    