#include <stdio.h>

int main() {
	int var = 20; 	/* actual variable declaration */
	int *ip;	/* pointer variable declaration */
	int *null_ptr = NULL;

	ip = &var;	/* store address of var in pointer variable */

	printf("Address of var variable: %x\n", &var);

	/* address stored in pointer variable */
	printf("Address stored in ip variable: %x\n", ip);

	/* access the value using the pointer */
	printf("Value of *ip variable: %d\n", *ip);

	/* NULL pointer is a constant with a value of zero */
	printf("The value of null_ptr is: %x\n", null_ptr);

	return 0;
}
