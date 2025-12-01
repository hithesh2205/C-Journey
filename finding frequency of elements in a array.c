#include <stdio.h>

void main() {
    int n, c;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], brr[n];

    // Input elements into arr
    for (int i = 0; i < n; i++) {
        printf("Enter the element: ");
        scanf("%d", &arr[i]);
        brr[i] = 0; // Initialize brr to 0 for tracking processed elements
    }

    // Count occurrences of each unique element
    for (int i = 0; i < n; i++) {
        if (brr[i] == 0) { // Check if the element is already processed
            c = 1; // Initialize count
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    c++;
                    brr[j] = -1; // Mark as processed
                }
            }

            printf("The number of times the element %d is present: %d\n", arr[i], c);
        }
    }
}
