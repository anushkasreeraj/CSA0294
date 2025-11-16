#include <stdio.h>

// Structure to store a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to multiply two complex numbers
Complex multiply(Complex c1, Complex c2) {
    Complex result;
    result.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    result.imag = (c1.real * c2.imag) + (c1.imag * c2.real);
    return result;
}

// Function to input a complex number
Complex inputComplex() {
    Complex c;
    printf("enter real part of complex number: ");
    scanf("%f", &c.real);
    printf("enter Imaginary part of complex number: ");
    scanf("%f", &c.imag);
    return c;
}

int main() {
    Complex c1, c2, product;

    printf("Enter First complex number:\n");
    c1 = inputComplex();

    printf("\nEnter Second complex number:\n");
    c2 = inputComplex();

    product = multiply(c1, c2);

    printf("\nMultiplication Result = %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}
