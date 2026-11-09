#include <stdio.h>

struct Data {
    int i;
    float f;
    char ch;
};

union Sample {
    int i;
    float f;
    char ch;
};

int main() {
    struct Data d;
    union Sample u;

    d.i = 10;
    d.f = 5.5;
    d.ch = 'A';

    u.i = 10;

    printf("Structure values: %d, %.1f, %c\n", d.i, d.f, d.ch);
    printf("Union integer value: %d\n", u.i);

    printf("Size of structure: %lu bytes\n", (unsigned long)sizeof(d));
    printf("Size of union: %lu bytes\n", (unsigned long)sizeof(u));

    return 0;
}
