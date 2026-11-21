#include<stdio.h>

double largerSalary(double salary1, double salary2);
double smallerSalary(double salary1,double salary2);


int main(){
    double salary1,salary2,mortgage;

    printf("Enter two salaries separted by space:\n");
        scanf("%lf"%lf,&salary,&salary2);

    mortgage= largerSalary(salary1,salary2);
    mortgage+= smallerSalary(salary1,salary2);

    printf("The ")
}