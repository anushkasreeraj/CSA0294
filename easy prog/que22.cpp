//sum of thegiven array using pointers
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[10];
    int *p;

    printf("Input the number of elements to store in the array (max 10) : ");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);

    for (i = 0; i < n; i++) {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    p = arr;  // pointer points to first element

    // Calculate sum using pointer
    for (i = 0; i < n; i++) {
        sum += *(p + i);
    }

    printf("The sum of array is : %d\n", sum);

    return 0;
}
