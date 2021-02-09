/*
 * user_input.c
 */


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char name[20];
	printf("Enter your name: ");
	fgets(name, 20, stdin);
	printf("Your name is %s \n", name);
	
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("You are %d years old.\n", age );
	
	double gwa;
	printf("Enter your GWA: ");
	scanf("%lf", &gwa);
	printf("Your GWA is %f. \n", gwa);
	
	char grade;
	printf("Enter your grade: ");
	scanf("%c", &grade);
	printf("Your grade is %c \n", grade);
	
	return 0;
}

