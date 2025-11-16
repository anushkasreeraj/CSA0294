//total nd %
#include <stdio.h>

struct Student {
    int rollno;
    char name[50];
    float m1, m2, m3;
    float total;
    float percentage;
};

int main() {
    struct Student s;

    printf("Enter RollNo: ");
    scanf("%d", &s.rollno);

    printf("Enter Name: ");
    scanf("%s", s.name);

    printf("Enter three subject marks: ");
    scanf("%f %f %f", &s.m1, &s.m2, &s.m3);

    // Calculate total and percentage
    s.total = s.m1 + s.m2 + s.m3;
    s.percentage = s.total / 3;

    // Output
    printf("\nrollno=%d\n", s.rollno);
    printf("Name=%s\n", s.name);
    printf("m1=%.0f m2=%.0f m3=%.0f ", s.m1, s.m2, s.m3);
    printf("total=%.0f per=%f\n", s.total, s.percentage);

    return 0;
}
