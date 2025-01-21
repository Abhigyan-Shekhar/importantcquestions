#include <stdio.h>

int main() {
    int choice, a, b;
    int sum, difference, product, quotient, remainder;

    printf("Enter your choice:\n1 - Add\n2 - Subtract\n3 - Product\n4 - Quotient and Remainder\n");
    scanf("%d", &choice);

    printf("Enter two operands:\n");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1:
            sum = a + b;
            printf("The sum of %d and %d is %d\n", a, b, sum);
            break;

        case 2:
            difference = a - b;
            printf("The difference of %d and %d is %d\n", a, b, difference);
            break;

        case 3:
            product = a * b;
            printf("The product of %d and %d is %d\n", a, b, product);
            break;

        case 4:
            if (b == 0) {
                printf("Division by zero is not possible.\n");
            } else {
                quotient = a / b;
                remainder = a % b;
                printf("The quotient of %d divided by %d is %d and the remainder is %d\n", a, b, quotient, remainder);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
