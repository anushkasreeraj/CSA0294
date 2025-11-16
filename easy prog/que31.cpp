//store and display usin union
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

    union Student s[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter student %d Roll No.: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Roll No = %d\n", s[i].rollno);

        printf("Enter student %d Name: ", i + 1);
        scanf("%s", s[i].name);
        printf("Name = %s\n", s[i].name);

        printf("Enter student %d Marks: ", i + 1);
        scanf("%f", &s[i].marks);
        printf("Marks = %.2f\n", s[i].marks);
    }

    return 0;
}
