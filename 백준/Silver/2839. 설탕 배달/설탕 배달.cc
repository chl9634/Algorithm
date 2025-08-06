#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if(N < 3 || N > 5000)
        return 0;
    
    int cnt = 0;
    while (N >= 0) 
    {
        if (N % 5 == 0) 
        {
            cnt += N / 5;
            cout << cnt << endl;
            return 0;
        }
        
        cnt++;
        N -= 3;
    }
    
    cout << -1;
    return 0;
}