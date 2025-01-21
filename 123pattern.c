#include <stdio.h>

int main() {
    int i, j;

    for (i = 4; i >= 1; i--) {  // Outer loop for rows
        for (j = 1; j <= i; j++) {  // Inner loop for numbers in each row
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
