#include <stdio.h>

int difference(int *a, int *b)
{
    if(*a > *b)
    {
        return  *a - *b;
    }
    else
    {
        return *b - *a;
    }
}

int addition(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = addition(&a, &b);
    int sub = difference(&a, &b);

    printf("%d\n", sum);
    printf("%d", sub);

    return 0;
}