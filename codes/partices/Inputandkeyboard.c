#include<stdio.h>

int main(){

    //Declare variables
    float radius, area;

    //const means its value should not be changed

    const float PI =3.14159;

    // Ask the user for a radius
    printf("Enter a number for radius:\n");
    scanf("%f", &radius);

    // Calculate the area
    area = radius * radius * PI;

    // Display the result and %.2f means to display a decimal number rounded to two digits, if don't do it will all decimal number
    printf("The area of the circle of radius %.2f ", radius);
    printf("is %.2f\n", area);

    return 0;
}


