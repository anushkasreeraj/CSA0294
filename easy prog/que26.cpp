#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float x, n;

    printf("Enter value of X: ");
    scanf("%f", &x);

    printf("Enter value of N: ");
    scanf("%f", &n);

    printf("\nChoose an operation:\n");
    printf("1. Pow(X, N)\n");
    printf("2. Add(X, N)\n");
    printf("3. Sub(X, N)\n");
    printf("4. Mul(X, N)\n");
    printf("5. Div(X, N)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Pow(%.2f, %.2f) = %.2f\n", x, n, pow(x, n));
            break;

        case 2:
            printf("Add(%.2f, %.2f) = %.2f\n", x, n, x + n);
            break;

        case 3:
            printf("Sub(%.2f, %.2f) = %.2f\n", x, n, x - n);
            break;

        case 4:
            printf("Mul(%.2f, %.2f) = %.2f\n", x, n, x * n);
            break;

        case 5:
            if (n == 0) {
                printf("Div(X, N) = Undefined (division by zero)\n");
            } else {
                printf("Div(%.2f, %.2f) = %.2f\n", x, n, x / n);
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
