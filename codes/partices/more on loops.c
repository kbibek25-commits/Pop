#include<stdio.h>
int main(){
    int count=0;
    char name [21];
    while(count<100){
        printf("please enter your name:\n");
        scanf("%20s",name);
        printf("Hello, %s!\n", name);
        printf("welcome to C! \n");
        count++; 
    }
return 0;
}