/* Prints out sum, difference, product, and quotient of two input numbers */

#include <stdio.h>
#include <stdlib.h>

int main() {
	double num1;
	double num2;
	printf("Enter first number (A): ");
	scanf("%lf", &num1);
	printf("Enter second number (B): ");
	scanf("%lf", &num2);
	 
	printf("\nSum (A+B): %f", num1 + num2);
	printf("\nDifference (A-B): %f", num1 - num2);
	printf("\nProduct (A*B): %f", num1 * num2);
	printf("\nQuotient (A/B): %f \n", num1 / num2);
	
	return 0;
}
