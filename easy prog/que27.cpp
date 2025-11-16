#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter No. of Students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (i = 0; i < n; i++) {
        printf("\nEnter student %d Roll No., Name, Marks: ", i + 1);
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No.: %d\n", s[i].roll);
        printf("Name     : %s\n", s[i].name);
        printf("Marks    : %.2f\n", s[i].marks);
    }

    return 0;
}

