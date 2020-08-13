#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char sen[1024];
    gets(sen);
    int n = strlen(sen);
    for(int i = 0; i < n; i++)
    {
        if(sen[i] == ' ')
        {
            printf("\n");
        }
        else 
        {
            printf("%c",sen[i]);
        }
    }
    return 0;

}