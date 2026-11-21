/*----------------------------------------
----Increment and decrement operators-----
-----------------------------------------*/

#include<stdio.h>

int main(){

/*-----------------------
------preincrement-------
-------------------------*/

    int i = 1;
    int j =++i;
    printf("i=%d\n",i);
    printf("j=%d\n",j);

/*-------------------------
------postincrement--------
--------------------------*/

    int employeeID= 2;
    int person2 = employeeID++;
    printf("employeeID =%d\n",employeeID);
    printf("person =%d\n", person2);


/*-------------------------
------predecrement---------
--------------------------*/

    int B = 9;
    int V = --B;
    printf("B=%d\n",B);
    printf("V=%d\n",V);


/*-------------------------
------postdecrement--------
--------------------------*/
    int O= 9;
    int P = B++;
    printf("O=%d\n",O);
    printf("P=%d\n",P);

    return 0;
}