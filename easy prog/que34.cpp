#include <stdio.h>

// Structure to store a complex number
struct Complex {
    int real;
    int imag;
};

// Function to subtract two complex numbers
struct Complex subtract(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, diff;

    // Input first complex number
    printf("Enter First complex number:\n");
    printf("enter real part of complex number: ");
    scanf("%d", &c1.real);
    printf("enter Imaginary part of complex number: ");
    scanf("%d", &c1.imag);

    // Input second complex number
    printf("\nEnter Second complex number:\n");
    printf("enter real part of complex number: ");
    scanf("%d", &c2.real);
    printf("enter Imaginary part of complex number: ");
    scanf("%d", &c2.imag);

    // Subtract the numbers
    diff = subtract(c1, c2);

    // Output
    printf("\nSubtraction of complex number:\n");
    printf("Real part of Subtraction : %d\n", diff.real);
    printf("Imaginary part of Subtraction: %d\n", diff.imag);

    return 0;
}
