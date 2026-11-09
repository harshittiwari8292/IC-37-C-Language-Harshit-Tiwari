#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Name: ");
        scanf("%49s", s[i].name);

        printf("Roll number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details\n");
    for (i = 0; i < 3; i++) {
        printf("%s  %d  %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
