#include <stdio.h>
#include <math.h>

// Function declarations
int add(int x, int n);
int sub(int x, int n);
int mul(int x, int n);
float divide(int x, int n);
double power(int x, int n);

int main() {
    int x, n, choice;

    // Input
    printf("Enter value of X: ");
    scanf("%d", &x);

    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("\nChoose Operation:\n");
    printf("1. Power (Pow)\n");
    printf("2. Add\n");
    printf("3. Subtract\n");
    printf("4. Multiply\n");
    printf("5. Divide\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Pow(%d,%d) = %.2lf\n", x, n, power(x, n));
            break;
        case 2:
            printf("Add(%d,%d) = %d\n", x, n, add(x, n));
            break;
        case 3:
            printf("Sub(%d,%d) = %d\n", x, n, sub(x, n));
            break;
        case 4:
            printf("Mul(%d,%d) = %d\n", x, n, mul(x, n));
            break;
        case 5:
            if (n == 0)
                printf("Error! Division by zero not allowed.\n");
            else
                printf("Div(%d,%d) = %.2f\n", x, n, divide(x, n));
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

int add(int x, int n) {
    return x + n;
}

int sub(int x, int n) {
    return x - n;
}

int mul(int x, int n) {
    return x * n;
}

float divide(int x, int n) {
    return (float)x / n;
}

double power(int x, int n) {
    return pow(x, n);
}
