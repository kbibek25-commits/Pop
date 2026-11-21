#include <stdio.h>

int main() {
    int age = 20;
    int *ptr = &age;
    printf("Value of age: %d\n",age);
    printf("Address of age: %p\n", (void *)&age);
    printf("Address of age via pointer: %p\n", (void *)ptr);
    printf("Derefrencing a pointer: %d\n", *ptr );
}