/*
    case study
*/


#include<stdio.h>
#define Kilogram_per_pound 0.45
#define MEters_per_inch 0.025



int main(){
    float  height,weight;


    printf("Enter  weight in pounds:");
        scanf("%f",&weight);
    printf("Enter height in inches:");
        scanf("%F",&height);



    float weightInKilgorams = weight*Kilogram_per_pound;
        float heightInInches =  height*MEters_per_inch;
            double Bmi =weightInKilgorams/(heightInInches*heightInInches);

printf("Bm is %2f",Bmi);

    /*---------------------------
        Else if statement for BMi
    */--------------------------

    if(Bmi <=18.5){
        printf("underweight");
      }
    else if(Bmi <=25){
        printf("normal");
    }
    else if(Bmi <30){
        printf("overweiight");
    }
    else{
        printf("obese");
    };
    


    return 0;
}
