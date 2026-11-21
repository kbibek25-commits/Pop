#include<stdio.h>

float student,score;

int main(){
    printf("Enter your scorce:");
        scanf("%f",&score);

    if(score >= 70){
         printf("B\n");

    }
    else if (score >=60){
        printf("c\n");
    }
    else if(score>=50){
        printf("D\n");
    }else{
        printf("Your scorces are below grade D");
    };
}