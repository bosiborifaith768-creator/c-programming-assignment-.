#include <stdio.h>

#define PI 3.142

int main(){
	float radius, height, volume, surface_area;
	
	//Prompt user for input
	printf("Enter the radius of the cylinder: ");
	scanf("%f",&radius);
	
	printf("Enter the height of the cylinder: ");
	scanf("%f",&height);
	
	//calculate volume
	volume = PI * radius * radius * height;   
	
	//Calculate surface area
	surface_area = (2 * PI * radius * radius) + (2 * PI * radius * height);  
	
	//Display results
	printf("\nVolume of the cylinder = %.2f\n", surface_area);
	printf("Surface area of the cylinder = %.2f\n",surface_area);
	
	return  0;
}	
