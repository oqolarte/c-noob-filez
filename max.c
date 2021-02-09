#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
		int result;
		if(num1 >= num2 && num1 >= num3){
				result = num1;
		} else if(num2 >= num1 && num2>= num3) {
				result = num2;
		} else {
				result = num3;
		}
		return result;
}

int main(){
		int user_input_number1;
		printf("Enter first number: ");
		scanf("%d", &user_input_number1);

		int user_input_number2;
		printf("Enter second number: ");
		scanf("%d", &user_input_number2);

		int user_input_number3;
		printf("Enter third number: ");
		scanf("%d", &user_input_number3);

		printf("Among the three numbers, %d is the biggest.\n", max(user_input_number1, user_input_number2, user_input_number3));
		return 0;
}
