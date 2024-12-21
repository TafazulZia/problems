#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    int n, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }
    printf("\nTopper: %s (Roll: %d) with Marks: %.2f\n", students[topperIndex].name, students[topperIndex].roll, students[topperIndex].marks);
    return 0;
}
