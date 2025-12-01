#include <stdio.h>
int main() {
    int a = 5, b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);  // Passing the address of a and b
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}


// Function definition using call by reference
void swap(int *x, int *y) {
    int temp = *x;  // Dereferencing the pointer to get the value
    *x = *y;        // Modify the value at the address pointed by x
    *y = temp;      // Modify the value at the address pointed by y
}

