/*
 * mad_libs.c
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
	char color[15];
	char pluralNoun[20];
	char celebrityF[15];
	char celebrityL[15];
	
	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural noun: ");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);
	
	
	printf("\nRoses are %s\n", color);
	printf("%s are blue.\n", pluralNoun);
	printf("I love %s %s. \n", celebrityF, celebrityL);
	return 0;
}

