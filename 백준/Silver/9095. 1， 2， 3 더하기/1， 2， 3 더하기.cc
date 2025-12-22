#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dp[12] = {0};
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for (int i = 4; i <= 11; i++)
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];

    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) 
    {
        int n;
        cin >> n;
        
        if(n < 1 || n > 11) return 0;
        
        cout << dp[n] << '\n';
    }
    
    return 0;
}