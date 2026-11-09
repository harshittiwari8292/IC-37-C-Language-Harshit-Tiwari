#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int *ptr;

    ptr = &a;
    printf("Value of a using pointer = %d\n", *ptr);

    ptr = &b;
    printf("Value of b using pointer = %d\n", *ptr);

    return 0;
}
