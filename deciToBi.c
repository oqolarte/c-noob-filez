/*
 * Converts the decimal input to binary output
 * without needing arithmetic operation.
 */

#include <stdio.h>

#define CHAR_BITS 8 /* size of character */
#define INT_BITS (sizeof(int) * CHAR_BITS)

int main() {
	int num, index, i;
	int bin[INT_BITS] = {0};

	printf("Enter decimal number: ");
	scanf("%d", &num);

	/* Array Index for binary number */ 
	index = (INT_BITS - 1);

	while(index >= 0) {
		/* to get the last binary digit of the number 'num
		 * and accumulate it at the beginning of 'bin'
		 */
		bin[index] = (num & 1);
		
		/* decerement index */
		index--;

		/* right shift num by 1 */
		num >>= 1;
	}

	/* Display converted binary on the console screen */
	printf("Binary equivalent: ");
	for(i = 0; i < INT_BITS; i++) {
		printf("%d", bin[i]);
	}
	printf("\n");

	return 0;
}
