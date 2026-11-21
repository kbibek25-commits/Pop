#include <stdio.h>

//declare the variable of various expenses

double foodexpenses,leisureexpenses,clothesexpenses,travel;

//constanst for accomodation creating the vaiable for double
const int accomodation =500;
double total;


int main(){

    /*-------------------------------
        prompt for various exepenses
    --------------------------------*/

    printf("Enter the expenses of food:\n");
        scanf("%lf",&foodexpenses);
    
    printf("Enter the expenses of lesisure:\n");
        scanf("%lF",&leisureexpenses);

    printf("Enter the expenses of clothes:\n");
        scanf("%lF",&clothesexpenses);

    printf("Enter the expenses of travel:\n");
        scanf("%lF",&travel);

    printf("Fixed accommodation expenses is: %d\n",accomodation);

    /*------------------------------
        total expenses calculation.    
    --------------------------------*/

    total= foodexpenses +leisureexpenses + clothesexpenses + accomodation +travel;
        
printf("The total expenses from various things is: %2.lf", total);

return 0;

}

// write the print of various expenses 

//show the total with accomodation cost