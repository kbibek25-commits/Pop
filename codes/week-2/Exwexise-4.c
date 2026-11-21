#include <stdio.h>
int year;

int main(){
    printf("Enter a year:");
    scanf("%d",&year);

    switch(year %=10){
        case 0: printf("monkey\n");break;
        case 1: printf("pig\n");break;
        case 2: printf("rooster\n");break;
        case 3: printf("dog\n");break;
        case 4: printf("cow\n");break;
        case 5: printf("crow\n");break;
        case 6: printf("tiger\n");break;
        case 7: printf("hamster\n");break;
        case 8: printf("cat\n");break;
        case 9: printf("sheep\n");break;
        

        

}

}