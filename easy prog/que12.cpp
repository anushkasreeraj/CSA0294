#include <stdio.h>
#include <math.h>

// Function to check if a number is composite
int isComposite(int n) {
    int i;

    if (n <= 1)
        return 0;   // not composite

    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return 1;   // composite
    }
    return 0;           // prime
}

int main() {
    int arr[50], n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for (i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }

    printf("Number of Composite Numbers = %d\n", count);

    return 0;
}
