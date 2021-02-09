#include <stdio.h>

#define A 65
#define Z 91

int main() {
	int i = A; // loop starts at 65

	for(i=A ; i<Z; i++) { // if i is smaller than 91, we increment its value
		printf("%c --> \t", i); // prints the character corresponding to the value of i
		printf("%d\n",i);
	}
	return 0;
}
