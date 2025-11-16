//largest lement using dynamic memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float *arr, max;

    printf("Input total number of elements(1 to 100): ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (float *)malloc(n * sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read elements
    for(i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &arr[i]);
    }

    // Find maximum
    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("The Largest element is : %.2f\n", max);

    // Free allocated memory
    free(arr);

    return 0;
}
