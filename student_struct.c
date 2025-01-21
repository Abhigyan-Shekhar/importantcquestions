#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter roll number, name, and marks of student %d: ", i + 1);
        scanf("%d %s %f", &s[i].roll_no, s[i].name, &s[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}
