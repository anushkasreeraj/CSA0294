//division of 2 complex numbers

#include <stdio.h>

// Structure to store a complex number
typedef struct {
    float real;
    float imag;
} Complex;

// Function to divide two complex numbers
Complex divide(Complex c1, Complex c2) {
    Complex result;
    float denominator;

    denominator = (c2.real * c2.real) + (c2.imag * c2.imag);

    if (denominator == 0) {
        printf("Error! Division by zero.\n");
        result.real = result.imag = 0;
        return result;
    }

    result.real = ((c1.real * c2.real) + (c1.imag * c2.imag)) / denominator;
    result.imag = ((c1.imag * c2.real) - (c1.real * c2.imag)) / denominator;

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
    Complex c1, c2, quotient;

    printf("Enter First complex number:\n");
    c1 = inputComplex();

    printf("\nEnter Second complex number:\n");
    c2 = inputComplex();

    quotient = divide(c1, c2);

    printf("\nDivision Result = %.2f + %.2fi\n", quotient.real, quotient.imag);

    return 0;
}
