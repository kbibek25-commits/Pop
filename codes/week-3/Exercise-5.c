/*-----------------------------------------------------
------Using variables in the statement body of loop----
-------------------------------------------------------*/


#include<stdio.h>

int main(){
    int count=0;
    char name[20];
    while(count<1){
        printf("PLease enter your name:\n");
        scanf("%19s",name);
        printf("Hello,%s\n",name);
        printf("Wecome to C!");
        count++;
    }


return 0;
}