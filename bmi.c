/* Remember to link the math library using -lm when compiling */

#include <stdio.h>
#include <math.h>

int main() {
    float height = 0;
    float weight = 0;
    float bmi = 0;

    printf("This is a BMI Calculator\n");
    
    printf("Enter your height in centimeters: ");
    scanf("%f", &height);

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    // bmi = kg / (cm/100)^2

    bmi = weight / pow((height/100),2);

    printf("Your BMI is: %.2f\n", bmi);

    if(bmi < 18.5){
        printf("You are underweight.\n");
    } else if(bmi <= 24.9){
        printf("You are a healthy weight.\n");
    } else if(bmi <= 29.9){
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }

    return 0;
}
