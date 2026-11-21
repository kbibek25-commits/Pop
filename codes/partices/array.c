#include<stdio.h>

int main(){
 
int size=10;
double mylist[size];

printf("Enter %d values from keyboard:\n ", size);


for(int i=0; i<size; i++)
{
    scanf("%lf", &mylist[i]);
}
return 0;
}