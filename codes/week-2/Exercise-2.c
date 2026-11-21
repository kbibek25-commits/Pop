/*
Two way statemnet
*/

#include <stdio.h>
#define PI 3.14;
float radius, area;

int main(){
    printf("Enter the radius:");
    scanf("%f",&radius);

if(radius >=0){
    area = radius*radius*PI;
      
    
    printf("The area for the cricle ");
            printf("of radius  %f is %f \n",radius,area);
}else{
    printf("Radius cannot be negative!\n");
}

}