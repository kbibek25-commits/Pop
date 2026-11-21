/*-------------------------
------postincrement--------
--------------------------*/

#include<stdio.h>

FILE *fp;
// store or opens new files so function like fsacanf()acess it.
int main(){

    float radius,area;
    const float PI= 3.14;

    fp=fopen("radius_file.txt","r");

    if(fp==NULL){
        printf("file cannont be open\n");
        return 1;
    }

    fscanf(fp,"%f",&radius); 
    
    area = PI *radius*radius;

    printf("Area of the cricle is =%.2f",area);

    fclose(fp);
return 0;

};