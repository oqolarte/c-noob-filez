#include <stdio.h>
#include <stdlib.h>

int main(){
        double num1, num2;
        char op;

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter operator: ");
        scanf(" %c", &op);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch(op) {
                case '+':
                        printf("Result: %f\n", num1 + num2);
                        break;
                case '-':
                        printf("Result: %f\n", num1 - num2);
                        break;
                case '*':
                        printf("Result: %f\n", num1 * num2);
                        break;
                case '/':
                        printf("Result: %f\n", num1 / num2);
                        break;
                default:
                        printf("Invalid operator\n");
                        break;
        }
        return 0;
}
