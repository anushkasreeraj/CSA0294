//max of 2 no. using pointers
#include <stdio.h>

int main() {
    int a, b;
    int *p1, *p2;

    printf("Input the first number : ");
    scanf("%d", &a);

    printf("Input the second number : ");
    scanf("%d", &b);

    p1 = &a;
    p2 = &b;

    if (*p1 > *p2)
        printf("%d is the maximum number.\n", *p1);
    else if (*p2 > *p1)
        printf("%d is the maximum number.\n", *p2);
    else
        printf("Both numbers are equal.\n");

    return 0;
}
