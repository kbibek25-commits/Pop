/*-------------------------
------pesudo-code-work-----
--------------------------*/

#include<stdio.h>

int main(){

printf("Multiplication table\n");
for(int j=1; j<=9;j++){
    printf("%4d",j);
}

printf("\n-------------------------------------------------------\n");

for(int i=1; i<=9;i++){
        printf("%4d",i);


    for(int j=1;j<=9;j++){
        printf("%4d", i*j);
}

printf("\n");  
}

return 0;

};