/*-------------------------
--------case-study---------
--------------------------*/

#include<stdio.h>

int main(){

    double price = 200000;
    int year = 0;

        while(price <400000){
            price =price*1.05;
            year++;
        }    
    printf("Price will be doubled in %d year\n",year);
    printf("price will be :%.2f in %d years\n",price,year);
}