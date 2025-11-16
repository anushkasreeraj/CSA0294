//Program to remove duplicates from the sorted array
#include <stdio.h>

int main() {
    int n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort the array (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 2: Remove duplicates
    int tempArr[n];
    int k = 0;
    tempArr[k++] = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] != arr[i - 1]) {
            tempArr[k++] = arr[i];
        }
    }

    // Step 3: Print final array
    printf("Sorted Array without duplicates = {");
    for(i = 0; i < k; i++) {
        printf("%d", tempArr[i]);
        if(i != k - 1)
            printf(", ");
    }
    printf("}\n");

    return 0;
}
