#include <stdio.h>

int main()
{
    int a = 10;

    a += 5;
    printf("After += : %d\n", a);

    a -= 3;
    printf("After -= : %d\n", a);

    a *= 2;
    printf("After *= : %d\n", a);

    printf("Increment: %d\n", ++a);
    printf("Decrement: %d\n", --a);

    return 0;
}
