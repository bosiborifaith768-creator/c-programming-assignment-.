#include <stdio.h>

float convertToCelcius(float fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}

int main(void) {
	float f;
	
     printf("Enter temperature in Fahrenheit: ");
	scanf("%f", &f);
	
	printf("Temperature in Celsius = %.2f\n", convertToCelcius(f));
	
	return 0;
}
