#include <stdio.h>

int main(){
    float radius,area;
	const float PI= 3.14;

    	printf("Enter the number for radius:\n");
            scanf("%f",&radius);

	area = radius*radius*PI;

	    printf("The area for the cricle of radius is %.f\n",radius);
	        printf("Area is the %.f\n",area);


    return 0;
}