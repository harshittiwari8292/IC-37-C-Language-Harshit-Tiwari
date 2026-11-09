#include <stdio.h>

void changeValue(int n)
{
    n = 100;
    printf("Inside function: %d\n", n);
}

int main()
{
    int number = 10;

    printf("Before function call: %d\n", number);
    changeValue(number);
    printf("After function call: %d\n", number);

    return 0;
}
