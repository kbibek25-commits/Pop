
#include <stdio.h>

int main() {

    // Declare a two-dimensional matrix
    int rSize = 4, cSize = 4;
    int matrix[rSize][cSize];

    printf("Enter the %d rows and %d columns:\n", rSize, cSize);

    // Input values into the matrix
    for (int row = 0; row < rSize; row++) {

        for (int col = 0; col < cSize; col++) {

            scanf("%d", &matrix[row][col]);
        }
    }

    // Display the matrix
    printf("\nYour matrix is:\n");

    for (int row = 0; row < rSize; row++) {

        for (int col = 0; col < cSize; col++) {

            printf("%d ", matrix[row][col]);
        }

        printf("\n");

        int total =0;
         for(int row =0; row<rSize; row++){
            for (int column =0; column <cSize; column++){
                total += matrix[row][column];

            }
            printf("The total is %d\n", total);printf("The total is %d\n", total);
        
         }

         // largest row total
         int maxRowNo = 0;
         int maxTotal = 0;

         //set sum of row 0 to maxTotal
         for(int column =0; column<cSize; column++)
             maxTotal += matrix[0][column++];

        // going through each row to find the largest total
         for(int row=1; row<rSize; row++){
            int thisTotal = 0;
            // sum elrment sof each orther row
            for(int column=0; column<cSize; column++)
                thisTotal +=matrix[row][column];

            //comaprison between sum
             if(thisTotal> maxTotal){
            
                maxTotal=thisTotal;
                maxRowNo=row;

             }
         }

         printf("Row %d has the maximun sum of %d\n", maxRowNo, maxTotal);

    

         
    }

    return 0;
}

