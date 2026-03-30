#include <stdio.h>

int main() {
    float height;               // to store height in meters
    double bank_balance;         // to store bank balance
    char phone_number[15];       // to store phone number as string

    // Prompt user for input
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Ksh): ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%s", phone_number);  // reads input as string

    // Display the values back to the user
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: Ksh %.2lf\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}