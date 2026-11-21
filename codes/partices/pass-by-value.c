#include<stdio.h>

int increment(int n);

int increment(int n){
    n++;
    printf("n inside the function is %d\n",n);
    return 0;

}

int main(){
    int x=1;
    printf("Befor the call, x is %d\n",x);
    increment(x);
    printf("After the call, is %d\n",x);
    
}