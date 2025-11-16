//addition of complext numbers using structure and function
#include <stdio.h>

// Structure to store complex number
struct Complex {
    int real;
    int imag;
};

// Function to add two complex numbers
struct Complex add(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    struct Complex c1, c2, sum;

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

    // Add complex numbers
    sum = add(c1, c2);

    // Output
    printf("\nAddition of complex number:\n");
    printf("Real part of addition : %d\n", sum.real);
    printf("Imaginary part of addition : %d\n", sum.imag);

    return 0;
}
