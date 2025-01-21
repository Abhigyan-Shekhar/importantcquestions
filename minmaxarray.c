#include <stdio.h>

int main() {
    int n, i, min, max;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int array[n]; // Declare array after reading the size

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = min = array[0]; // Initialize max and min with the first element

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i]; // Update max
        }
        if (array[i] < min) {
            min = array[i]; // Update min
        }
    }

    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}
