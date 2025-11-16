//even or odd
#include <stdio.h>
#include <math.h>

int isInteger(float n) {
    return floor(n) == n;   // checks if number has no decimal part
}

void checkEvenOdd(float n) {
    if (!isInteger(n)) {
        printf("The number %.2f is not an integer, so it is neither even nor odd.\n", n);
        return;
    }

    // Convert to int safely
    int num = (int)n;

    if (num % 2 == 0)
        printf("The number %.0f is even.\n", n);
    else
        printf("The number %.0f is odd.\n", n);
}

int main() {
    float n;

    printf("Input any number: ");
    scanf("%f", &n);

    checkEvenOdd(n);

    return 0;
}
