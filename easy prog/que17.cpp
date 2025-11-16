//Write a program to search the given element and display its position in a linear array.
#include <stdio.h>

int main() {
    int n, i, search;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &search);

    int found = -1;

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Element %d found at position %d\n", search, found + 1);
    else
        printf("Element %d not found in the array\n", search);

    return 0;
}
