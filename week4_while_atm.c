#include <stdio.h>

int main(void) {
	float balance = 1000;
	float withdraw;
	
	while (balance > 0) {
		printf("Enter withdrawal amount: ");
		scanf("%f", &withdraw);
		
		balance = balance - withdraw;
		
		if (balance > 0) {
			printf("Remaining balance: %.2f\n",balance);
		}else {
			printf("Your balance is now zero or negative: %.2f\n",balance);
		}
	}
	
	return 0;
}
	