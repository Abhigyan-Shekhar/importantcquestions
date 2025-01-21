#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) { // Outer loop for rows
        for (j = 1; j <= i; j++) { // Inner loop for numbers in each row
            printf("%d ", num);
            num++; // Increment the number to be printed
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
