//sq of a number using func
#include <stdio.h>

float square(float n) {
    return n * n;
}

int main() {
    float num;

    printf("Input any number for square : ");
    scanf("%f", &num);

    printf("The square of %.0f is : %.2f\n", num, square(num));

    return 0;
}
