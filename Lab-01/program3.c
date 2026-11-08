/*
 * Program 3: Addition of Two Numbers
 */

#include <stdio.h>

int main(void)
{
    int num1, num2, sum;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Sum = %d\n", sum);

    return 0;
}
