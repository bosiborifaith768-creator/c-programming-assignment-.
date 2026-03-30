#include <stdio.h>
#include <math.h>   //Needed for pow() in compound interest calculation

int main() {
	int age;
	double income;
	
	// --- Loan Eligibility ---
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your annual income (Ksh): ");
	scanf("%1f", &income);
	
	if (age >= 21 && income >= 21000) {
		printf("Congratulations! You qualify for a loan.\n");
	} else {
		printf("Unfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	//--- Simple Interest Calculation ---
	double principal, rate, time, simple_interest;
	printf("\n--- Simple Interest Calculation ---\n");
	printf("Enter principal amount (Ksh): ");
	scanf("%1f, &principal);
	
	printf("Enter rate of interest (%%): ");
	scanf("%1f", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);
    
    simple_interest = (principal * rate * time) /100;
    printf("Simple Interest = %.21f Ksh\n",simple_interest);

    // --- Compound Interest Calculation ---
    double compound_interest;
    compound_interest = principal * pow(1 + rate/100, time) - principal;
    printf("Compound Interest = %.21f Ksh\n", compound_interest);
    
    return 0; 
}