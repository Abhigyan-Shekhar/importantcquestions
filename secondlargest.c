#include <stdio.h>

int main() {
    int n, i, largest, second_largest;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int array[n];
    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    largest = second_largest = -2147483648; // Initialize to the smallest integer value

    for (i = 0; i < n; i++) {
        if (array[i] > largest) {
            second_largest = largest; // Update second largest
            largest = array[i];       // Update largest
        } else if (array[i] > second_largest && array[i] != largest) {
            second_largest = array[i]; // Update second largest
        }
    }

    if (second_largest == -2147483648) {
        printf("No second largest element (all elements might be the same).\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }

    return 0;
}
