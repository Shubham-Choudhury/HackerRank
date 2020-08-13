#include <stdio.h>

int main()
{
    int a, b;
    float x, y;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &x, &y);

    int sum1 = a + b;
    int sub1 = a - b;
    printf("%d %d\n", sum1, sub1);

    float sum2 = x + y;
    float sub2 = x - y;
    printf("%.1f %.1f", sum2, sub2);

    return 0;

}

