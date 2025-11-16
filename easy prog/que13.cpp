#include <stdio.h>

int main() {
    int n, i, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    float arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            count++;
        }
    }

    printf("Number of negative numbers = %d\n", count);

    return 0;
}
