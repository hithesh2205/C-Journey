#include <stdio.h>

void main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for each row
        for (int j = 1; j <= n - i; j++) {  // Printing spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {  // Printing stars
            printf("*");
        }
        printf("\n");  // Move to the next line
    }
}

