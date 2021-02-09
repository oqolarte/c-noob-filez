#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age){
		printf("Hello, %s, you are %d!\n", name, age);;
}

int main() {
		printf("top\n");
		sayHi("Mike", 40);
		sayHi("Theo", 69);
		sayHi("Edgar", 28);
		printf("bottom\n");
		return 0;
}

