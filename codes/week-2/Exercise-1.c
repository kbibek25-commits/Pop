/*
Checking Input from Keyboard 
*/

//code 

#include<stdio.h>
#define PI  3.14159;
float radius, area;

int main(){

    printf("Enter the radius:");
        scanf("%f",&radius);

    if(radius >=0)
        area = radius*radius*PI;
            printf("The area for the cricle");
                printf(" of radius %f is %f\n",radius,area);
    
}