#include <stdio.h>
int main() {
    int init;
    scanf("%d", &init);
    int N = init;
    int count = 0;
 
    while(true) 
    {
	    N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
	    count++;
	
	    if(N == init) 
        {
		    break;
        }
    
    }
    printf("%d", count);
}