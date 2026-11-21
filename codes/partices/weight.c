
#include <stdio.h>

int main() {
    float weight, height, weightKg, heightMM, bmi;

    printf("Enter weight in pounds: ");
    scanf("%f", &weight);

    printf("Enter height in inches: ");
    scanf("%f", &height);

    // Convert pounds to kilograms
    weightKg = weight * 0.453592;

    // Convert inches to meters
    heightMM = height * 0.0254;

    // Calculate BMI
    bmi = weightKg / (heightMM * heightMM);

    // Display BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Display BMI interpretation
    if (bmi < 18.5) {
        printf("Underweight\n");
    }
    else if (bmi < 25) {
        printf("Normal\n");
    }
    else if (bmi < 30) {
        printf("Overweight\n");
    }
    else {
        printf("Obese\n");
    }

    return 0;
}
