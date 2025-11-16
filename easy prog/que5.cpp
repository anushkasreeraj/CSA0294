#include <stdio.h>

int main() {
    double num, square, cube;

    printf("Enter a number: ");
    scanf("%lf", &num);   // accepts decimal numbers

    square = num * num;
    cube   = num * num * num;

    printf("Square Number: %.3lf\n", square);
    printf("Cube Number: %.3lf\n", cube);

    return 0;
}
