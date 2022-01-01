/* converts temperature, from F to C, or C to F */

#include <stdio.h>
#include <ctype.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (1.8f)

float celsius(float argv) {
	return (argv - FREEZING_PT) / SCALE_FACTOR;
}

float fahrenheit(float argv) {
	return (argv * SCALE_FACTOR) + FREEZING_PT;
}

int main(void) 
{
	char user_input;
	float f_input, c_input;
	printf("Press 'f' to convert Celsius to Fahrenheit, or 'c' to convert Fahrenheit to Celsius: ");
	scanf("%c", &user_input);

	if(tolower(user_input) == 'c') {
		printf("Enter Fahrenheit: ");
		scanf("%f", &f_input);
		printf("Celsius: %.2f\n", celsius(f_input));
	} else if (tolower(user_input) == 'f') {
		printf("Enter Celsius: ");
		scanf("%f", &c_input);
		printf("Fahrenheit: %.2f\n", fahrenheit(c_input));
	} else {
		printf("Input error. Try again with valid inputs (c or f)");
	}

	return 0;
}
