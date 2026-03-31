#include <stdio.h>
int main(void) {
	int password;
	
	do {
		printf("Enter password: ");
		scanf("%d", &password);
		
		if (password != 1234) {
			printf("Wrong password. Try again.\n");
		}
		
	} while (password != 1234);
	
	printf("Access Granted\n");
	
	return 0;
}