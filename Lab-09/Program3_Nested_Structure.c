#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    int roll;
    struct Address address;
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter city: ");
    scanf("%49s", s.address.city);

    printf("Enter pincode: ");
    scanf("%d", &s.address.pincode);

    printf("\nName: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("City: %s\n", s.address.city);
    printf("Pincode: %d\n", s.address.pincode);

    return 0;
}
