/* Prints out cube of a given number */

#include <stdio.h>
#include <stdlib.h>

double cube(double num){
		/* double result = num * num * num;
		return result; */
		return num * num * num;
}

int main () {
		double nnn;
		printf("Enter a number that will get cubed: ");
		scanf("%lf", &nnn);
		printf("Answer: %f\n", cube(nnn));
		return 0;
}
