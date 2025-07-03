#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int money = 0;
    if(a == b && b == c && a == c)
    {
        money = a*1000 + 10000;
    }
    else if(a == b)
    {
        money = a*100 + 1000;
    }
    else if(a == c)
    {
        money = a*100 + 1000;
    }
    else if(b == c)
    {
        money = b*100 + 1000;
    }
    else
    {
        if (a > b && a > c)
        {
            money = a*100;
        }
        else if (b > a && b > c)
        {
            money = b*100;
        }
        else
        {
            money = c*100;
        }
    }
    printf("%d", money); 
}