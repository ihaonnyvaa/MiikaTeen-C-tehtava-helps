#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num1, num2;
    printf("Enter two integers: ");
    if (scanf("%d%d", &num1, &num2) != 2) {
        printf("Error: Invalid input.\n");
        return 1;
    }
    printf("First integer: %d\nSecond integer: %d\n", num1, num2);
    if (num1 > num2) {
        printf("%d is greater than %d.\n", num1, num2);
    } else if (num2 > num1) {
        printf("%d is greater than %d.\n", num2, num1);
    } else {
        printf("%d and %d are equal.\n", num1, num2);
    }
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    if (num2 == 0) {
        printf("Error: Cannot divide by zero.\n");
        return 1;
    } else {
        printf("Division: %.2f\n", (float) num1 / num2);
    }
    printf("Average: %.2f\n", (float) (num1 + num2) / 2);
    printf("Power: %.2f\n", pow(num1, num2));

    srand(time(NULL));
    int random = rand() % 101;
    printf("Random number: %d\n", random);
    if (random % 2 == 0) {
        printf("%d is even.\n", random);
    } else if (random % 2 != 0) {
        printf("%d is odd.\n", random);
    } else {
        printf("%d is neither odd nor even.\n", random);
    }
    if (random % 4 == 0 && random % 7 == 0) {
        printf("%d is divisible by both 4 and 7.\n", random);
    } else {
        printf("%d is not divisible by both 4 and 7.\n", random);
    }

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Array elements from beginning to end:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nArray elements from end to beginning:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}