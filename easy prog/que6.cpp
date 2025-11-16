#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        printf("Invalid age!\n");
        return 0;
    }

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        int years_left = 18 - age;
        printf("You are NOT eligible to vote.\n");
        printf("You need %d more year(s) to become eligible.\n", years_left);
    }

    return 0;
}
