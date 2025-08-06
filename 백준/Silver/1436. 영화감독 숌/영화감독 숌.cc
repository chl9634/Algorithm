#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int N;

    cin >> N;
    
    if(N < 1 || N > 10000)
        return 0;
    
    int num = 666;
    int cnt = 0;
    
    while (cnt < N) 
    {
        if (to_string(num).find("666") != -1)
            cnt++;
        
        num++;
    }

    cout << num - 1;
    return 0;
}