#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[n-i-1]);
    }

    return 0;
}
