#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    if(N < 1 || N > 10) return 0;
    if(K < 1 || K > 100'000'000) return 0;
    
    vector<int> coin(N, 0);
    
    int input;
    for(int i=0; i<N; i++)
    {
        cin >> input;
        
        if(input < 1 || input > 100'000'000) return 0;
        
        coin[i] = input;
        
        if(i >= 1)
            if(coin[i]/coin[i-1] < 1) return 0;
    }
    
    int count = 0;
    int quotient = 0;
    for(int i=N-1; i>=0; i--)
    {
        if(coin[i] > K)
            continue;
        
        quotient = K/coin[i];
        count += quotient;
        K -= quotient * coin[i];
    }

    cout << count << "\n";

    return 0;
}