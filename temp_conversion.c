/* converts temperature, from F to C, or C to F */

#include <stdio.h>

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

	if(user_input == 'c' || user_input == 'C') {
		printf("Enter Fahrenheit temperature: ");
		scanf("%f", &f_input);
		printf("Celsius equivalent: %.2f\n", celsius(f_input));
	} else if (user_input == 'f' || user_input == 'F') {
		printf("Enter Celsius temperature: ");
		scanf("%f", &c_input);
		printf("Fahrenheit equivalent: %.2f\n", fahrenheit(c_input));
	} else {
		printf("Input error. Try again with valid inputs (c or f)");
	}

	return 0;
}
