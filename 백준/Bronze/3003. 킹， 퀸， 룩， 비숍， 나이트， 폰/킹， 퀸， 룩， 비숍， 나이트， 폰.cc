#include <stdio.h>
 
int main() { // 1 1 2 2 2 8
 
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
 
	printf("%d %d %d %d %d %d", 1-a, 1-b, 2-c, 2-d, 2-e, 8-f);
	return 0;
}