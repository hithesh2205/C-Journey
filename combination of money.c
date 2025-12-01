#include <stdio.h>

void main() {
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    printf("Combinations using 1, 2, and 5 rupee coins:\n");

    for (int f = 0; f <= amount / 5; f++) {
        for (int t = 0; t <= (amount - 5 * f) / 2; t++) {
            int o = amount - (5 * f + 2 * t); // 1 rupee coins
            printf("5×%d + 2×%d + 1×%d\n", f, t, o);
        }
    }
}
