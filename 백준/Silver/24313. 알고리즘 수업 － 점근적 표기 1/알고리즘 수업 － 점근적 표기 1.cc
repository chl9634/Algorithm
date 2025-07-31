#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a1, a0;
    int c, n0;
    cin >> a1 >> a0 >> c >> n0;
    
    if(a1 > 100 || a0 > 100 || c > 100 || n0 > 100)
        return 0;
    
    if((a1 * n0 + a0 <= c * n0) && a1 <= c)
        cout << 1;
    else 
        cout << 0;
}