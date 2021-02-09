/*
 * Checks whether a triangle is an isoscles or not
 * by comparing the given sides
 */

#include <stdio.h>

int main()
{
	int side1, side2, side3;

	printf("Enter sides of triangle: \n");
	scanf("%d%d%d", &side1, &side2, &side3);

	if((side1==side2) || (side1==side3) || (side2==side3)) {
		printf("It's an Isosceles triangle.\n");
	} else {
		printf("It's not an Isosceles.\n");
	}
	return 0;
}
