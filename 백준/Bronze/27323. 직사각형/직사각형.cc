#include <iostream>
using namespace std;

int main() 
{
    int A, B;
    cin >> A >> B;
    
    if(A < 1 || A > 100)
        return 0;
    
    if(B < 1 || B > 100)
        return 0;
    
    cout << A * B;
    return 0;
}