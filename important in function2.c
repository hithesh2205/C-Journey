// we see that value is chnaged only when e play with the location
// ie due to that & symbol while calling and * symbol while defining

#include <stdio.h>

// Function that modifies the original value using a pointer
void modifyValue(int num) {
    num = 20; // Change the value at the address pointed to by 'num'
    printf("Inside the function, value = %d\n", num);
}

int main() {
    int value = 10; // Original variable
    printf("Before function call, value = %d\n", value);
    modifyValue(value); // Pass the address of 'value' to the function
    printf("After function call, value = %d\n", value); // 'value' is now modified
    return 0;
}
