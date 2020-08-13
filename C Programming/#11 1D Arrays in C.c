#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

 int n;
 scanf("%d",&n);
 int a[n];
 int i;
 int s=0;
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }   
 for(i=0;i<n;i++)
 {
     s=s+a[i];
 }
 printf("%d",s);
    return 0;
}