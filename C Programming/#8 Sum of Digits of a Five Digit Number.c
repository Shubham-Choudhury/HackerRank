#include <stdio.h>

int main()
{
    int a, b;
    int sum = 0;
    scanf("%d", &a);

    while(a != 0)
    {
        b = a % 10;
        a = a / 10;
        sum = sum + b;
    }
    printf("%d", sum);

    return 0;
}