#include <stdio.h>

int main() {
    register int count = 0;
    for (count = 0; count < 5; count++) {
        printf("%d ", count);
    }
    return 0;
}
