#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) 
{
  int andmax = 0, ormax = 0, xormax = 0;
  for(int i = 1; i < n; i ++) 
  {
      for(int j = i+1; j <= n; j ++) 
      {
        if((i & j) > andmax && (i & j) < k)
        {
            andmax = i & j;
        }
        if((i | j) > ormax && (i | j) < k)
        {
            ormax = i | j;
        }
        if((i ^ j) > xormax && (i ^ j) < k)
        {
            xormax = i ^ j;
        }
      }
  }
  printf("%d\n", andmax);
  printf("%d\n", ormax);
  printf("%d\n", xormax);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}