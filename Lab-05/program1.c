#include <stdio.h>

int main()
{
    int number;
    float value;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter a float: ");
    scanf("%f", &value);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nInteger: %d\n", number);
    printf("Float: %.2f\n", value);
    printf("Character: %c\n", ch);

    return 0;
}
