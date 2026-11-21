#include<stdio.h>

int m(int number, int numbers[]);

int main(){
    int x=1;
    int y[10];
    y[0]=100;

    printf("x before is %d\n",x);
        printf("y[0] before is %d\n",y[0]);

    m(x,y);

    printf("x after is %d\n",x);
      printf("y[0] before is %d\n",y[0]);

}   

int m(int number, int numbers[]){
    number=1001;
    numbers[0]=5555;
    return 0;
}