#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N, B;
    
    cin >> N >> B;
    
    if(B < 2 || B > 36)
        return 0;
    
    string val;
    char digit[36];
    
    for(int k = 0; k < 10; k++)
        digit[k] = '0' + k;
    
    for(int k = 10; k < 36; k++)
        digit[k] = 'A' + k -10;

    while (N > 0) 
    {
        int num = N % B;
        val = string(1, digit[num]) + val;
        N /= B;
    }

    cout << val << '\n';
    return 0;
}