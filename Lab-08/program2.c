#include <stdio.h>

unsigned long long factorial(int n)
{
    unsigned long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}

int main()
{
    int n;

    printf("Enter a number (0-20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
        printf("Please enter a number from 0 to 20.\n");
    else
        printf("Factorial = %llu\n", factorial(n));

    return 0;
}
