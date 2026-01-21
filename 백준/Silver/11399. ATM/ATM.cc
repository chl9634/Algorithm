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
    
    int N;
    cin >> N;
    
    if(N < 1 || N > 1000) return 0;

    vector<int> P(N+1, 0);
    
    int input;
    for(int i=1; i<N+1; i++)
    {
        cin >> input;
        if(input < 1 || input > 1000) return 0;
        P[i] = input;
    }
    
    sort(P.begin(), P.end());
    
    int sum = 0;
    for(int i=1; i<N+1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            sum += P[j];
        }  
    }

    cout << sum << "\n";

    return 0;
}