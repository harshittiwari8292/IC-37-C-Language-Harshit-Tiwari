#include <stdio.h>

int main()
{
    int number = 10;
    float result;

    result = (float)number / 3;

    printf("Integer value = %d\n", number);
    printf("After type conversion = %.2f\n", result);

    return 0;
}
