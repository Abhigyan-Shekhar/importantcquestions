#include <stdio.h>

int main() {
    int choice, a, b;

    do {
        printf("\n--- Bitwise Operations Menu ---\n");
        printf("1. AND (&)\n");
        printf("2. OR (|)\n");
        printf("3. XOR (^)\n");
        printf("4. Left Shift (<<)\n");
        printf("5. Right Shift (>>)\n");
        printf("6. Complement (~)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter two integers: ");
            scanf("%d %d", &a, &b);
        }

        switch (choice) {
            case 1:
                printf("Result of %d & %d: %d\n", a, b, a & b);
                break;
            case 2:
                printf("Result of %d | %d: %d\n", a, b, a | b);
                break;
            case 3:
                printf("Result of %d ^ %d: %d\n", a, b, a ^ b);
                break;
            case 4:
                printf("Enter the number of bits to shift: ");
                int shift;
                scanf("%d", &shift);
                printf("Result of %d << %d: %d\n", a, shift, a << shift);
                break;
            case 5:
                printf("Enter the number of bits to shift: ");
                scanf("%d", &shift);
                printf("Result of %d >> %d: %d\n", a, shift, a >> shift);
                break;
            case 6:
                printf("Enter an integer: ");
                scanf("%d", &a);
                printf("Result of ~%d: %d\n", a, ~a);
                break;
            case 7:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
