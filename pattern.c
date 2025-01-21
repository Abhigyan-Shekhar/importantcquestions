#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 5; i++) {           // Outer loop for rows
        for (j = 1; j <= 2 * i - 1; j++) { // Inner loop for stars
            printf("* ");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
