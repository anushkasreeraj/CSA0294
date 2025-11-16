#include <stdio.h>

union Student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    int n;

    printf("Enter No.Students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        union Student s;

        printf("Enter student %d Roll No., name, Marks: ", i);

        // Input roll number
        scanf("%d", &s.rollno);
        int roll = s.rollno;   // Store before overwriting

        // Input name
        scanf("%s", s.name);
        char name[50];
        strcpy(name, s.name);  // Copy before overwriting

        // Input marks
        scanf("%f", &s.marks);
        float marks = s.marks; // Store before overwriting

        // Display
        printf("\nStudent %d details:\n", i);
        printf("Roll no.: %d\n", roll);
        printf("Name: %s\n", name);
        printf("Marks: %.0f\n\n", marks);
    }

    return 0;
}
