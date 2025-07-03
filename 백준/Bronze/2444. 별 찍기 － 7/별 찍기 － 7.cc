#include <stdio.h>
 
int main() 
{
	int a;
	scanf("%d", &a);
    
    for(int x=0; x<a*2-1; x++)
    {
        int n;
        if(x < a)
            n = x;
        else
            n = a*2-x-2;
        
        for (int y = 0; y < a - n - 1; y++)
            printf(" ");

        for (int y = 0; y < 2 * n + 1; y++)
            printf("*");
        
        printf("\n");
    }
    return 0;
}