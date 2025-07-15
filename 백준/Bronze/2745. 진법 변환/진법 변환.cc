#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string N;
    int B;
    
    cin >> N >> B;
    
    if(B < 2 || B > 36)
        return 0;

    int val = 0;

    for (int i = 0; i < N.length(); i++) 
    {
        int digit;
        char ch = N.substr(i, 1).at(0);

        if ('A' <= ch && ch <= 'Z') 
            digit = ch - 55;
        else 
            digit = ch - '0';

        int mul = 1;
        for (int j = 0; j < N.length()-i-1; j++)
            mul *= B;

        val += digit * mul;
    }

    cout << val << endl;
    return 0;
}