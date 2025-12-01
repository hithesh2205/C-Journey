#include <stdio.h>

int main() {
    int array[100], pos, size, val;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("\nEnter %d elements\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the insertion location\n");
    scanf("%d", &pos);

    printf("Enter the value to insert\n");
    scanf("%d", &val);

    // Shift elements to the right from the insertion point
    for (int i = size - 1; i >= pos - 1; i--) {
        array[i + 1] = array[i];
    }

    // Insert the new value at the given position
    array[pos - 1] = val;

    size++;  // Increase the size after insertion

    printf("Resultant array is:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}
