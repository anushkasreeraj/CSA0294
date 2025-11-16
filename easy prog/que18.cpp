//to add 2 no. using pointers
#include <stdio.h>

int main() {
    int a, b, sum;
    int *p1, *p2;

    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;

    // Add values using pointers
    sum = *p1 + *p2;

    printf("The sum of the entered numbers is : %d\n", sum);

    return 0;
}
