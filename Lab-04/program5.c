#include <stdio.h>

int main()
{
    int result;

    result = 5 + 3 * 2;
    printf("5 + 3 * 2 = %d\n", result);

    result = (5 + 3) * 2;
    printf("(5 + 3) * 2 = %d\n", result);

    result = 10 - 4 / 2;
    printf("10 - 4 / 2 = %d\n", result);

    return 0;
}
