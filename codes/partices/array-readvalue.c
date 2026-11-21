    #include<stdio.h>
    int main(){


        FILE *fp;

            fp= fopen("mylist_input.txt","r");

        int size=10;
        double mylist[size];

            printf("Read %d values from a file:\n ", size);
            for(int i=0; i<size; i++)
        {
        
            
            fscanf(fp,"%lf", &mylist[i]);
            double total=0;
            for (int i=0; i<size; i++)
            {
                total+=mylist[i];
            }
            printf("The Total: %lf\n", total);

            
        }


    }

//fscanf("%1lf", &mylist[i]);