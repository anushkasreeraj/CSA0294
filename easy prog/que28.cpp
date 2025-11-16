#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter No. Students: ");
    scanf("%d", &n);

    struct Student s[n];
    struct Student *ptr = s;  // pointer to structure array

    for (i = 0; i < n; i++) {
        printf("\nEnter student %d Roll No., Name, Marks: ", i + 1);
        scanf("%d %s %f", &(ptr + i)->roll, (ptr + i)->name, &(ptr + i)->marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No.: %d\n", (ptr + i)->roll);
        printf("Name     : %s\n", (ptr + i)->name);
        printf("Marks    : %.2f\n", (ptr + i)->marks);
    }

    return 0;
}
