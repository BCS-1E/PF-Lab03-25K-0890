#include <stdio.h>

 int main(){
 	
 	float num; 
 	
 	// Ask user for a floating-point number
 	printf("Enter a floating-point number: ");
 	scanf("%f", &num);
 	
 	// Print with 3 decimal places
 	printf("Number with 3 decimal places: %.3\n", num);
 	
 	// Print with 6 decimal places
 	printf("Number with 6 decimal places: %.6\n", num);
 	
 	return 0;

 }
