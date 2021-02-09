/*
 * variable.c
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>


int main() {
		char characterName[] = "Tomasin0";
		int characterAge = 69;
		printf("There once was a man named %s.\n", characterName);
		printf("He was %d years old.\n",characterAge);
		printf("He really liked the name %s.\n", characterName);
	
		characterAge = 35;
		printf("And he REALLY likes being %d.\n", characterAge);
		return 0;
}

