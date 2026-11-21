#include <stdio.h>

FILE *fp;

int main() {

    fp = fopen("mylist_input.txt", "r");

    int size = 10;
    double myList[size];

    printf("Reading %d values from file:\n", size);

    for (int i = 0; i < size; i++)
        fscanf(fp, "%lf", &myList[i]);

    for (int i = 0; i < size; i++)
        printf("%.1lf\n", myList[i]);

    double total = 0;

    for (int i = 0; i < size; i++) {
        total += myList[i];
    }

    double max = myList[0];

    for (int i = 1; i < size; i++) {
        if (myList[i] > max) {
            max = myList[i];
        }
    }

    printf("\nTotal: %.1f\n", total);
    printf("Maximum: %.1f\n", max);

    fclose(fp);

    return 0;
}