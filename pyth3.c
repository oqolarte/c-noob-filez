#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int a, b, c;
	printf("This program checks whether three integers are Pythagorean triple.\n");
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	printf("Enter third number: ");
	scanf("%d", &c);

	if ( pow(c,2) == pow(a,2) + pow(b,2) || pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) ) {
		printf("%d, %d, and %d are Pythagorean triple.\n", a, b, c);
	} else {
		printf("They are not Pythagorean triple.\n");
	}

	return 0;
}

