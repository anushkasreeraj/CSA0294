//reverse an array
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    printf("Reverse Array elements = {");
    for(i = n - 1; i >= 0; i--) {
        printf("%g", arr[i]);
        if(i != 0)
            printf(", ");
    }
    printf("}\n");

    return 0;
}
