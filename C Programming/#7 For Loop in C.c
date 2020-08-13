#include <stdio.h>
#include <string.h>

int main() 
{
    int a, b;
    scanf("%d %d", &a, &b);
    char* sen[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = a; i <= b; i++)
    {
        if(i <= 9)
        {
            printf("%s\n", sen[i]);
        }
        else 
        {
            if(i % 2 == 0)
            {
                printf("even\n");
            }
            else
            {
                printf("odd\n");
            }
        }
    }

    return 0;
}