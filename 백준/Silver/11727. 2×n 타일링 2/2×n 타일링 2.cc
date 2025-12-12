#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<int> dp_vector(n+1, 0);
    
    dp_vector[1] = 1;
    
    if(n >= 2)
        dp_vector[2] = 3;
    
    for(int k = 3; k <= n; k++)
    {
        dp_vector[k] = (dp_vector[k-1] + (2*dp_vector[k-2])) % 10007;
    }
    
    cout << dp_vector[n] << '\n';
    return 0;

}