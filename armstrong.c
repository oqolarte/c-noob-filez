/* Source code for determining whether a number is an Armstrong Number.*/

/* Compile with -lm to avoid the pow() err */

#include <stdio.h>
#include <math.h>


int main () {
	int n, originalNum, remainder, digits = 0;
	float result = 0.0;

	printf("Enter an integer: ");
	scanf("%d", &n);
	originalNum = n;

	/* determine number of digits*/
	for (originalNum = n; originalNum != 0; ++digits) {
		originalNum /= 10;
	}

	for (originalNum = n; originalNum != 0; originalNum /= 10) {
		remainder = originalNum % 10;

		/*store the sum of power of digits in result*/
		result += pow(remainder, digits);
	}

	/* armstrong test */	
	if ((int)result == n) {
		printf("Yes, %d is an armstrong number.\n", n);
	} else {
		printf("No, it's not an armstrong number.\n");
	}
	return 0;

}
