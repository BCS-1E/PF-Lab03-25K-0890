#include <stdio.h>

int main() {
	
	int num1, num2;
    int sum, difference, product;
    float quotient;
    
    //prompt the user to enter first number
    printf("Enter the first integer: ");
    scanf("%d , &num1");
    
    //prompt the user to enter second number
    printf("Enter the second integer: ");
    scanf("%d , &num2");
    
    // Calculate the sum, difference, quotient and product
    sum = num1 + num2;
    difference = num2 - num1; 
    product = num1 * num2;
    quotient = num1 / num2;
    
    //display the result
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    
    return 0;
     
    
    
    
 
}
