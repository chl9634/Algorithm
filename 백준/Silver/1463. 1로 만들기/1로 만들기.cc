#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int X;
    cin >> X;
    
    vector<int> dp_vector(X+1, 0);
    
    for(int k = 2; k <= X; k++)
    {
        dp_vector[k] = dp_vector[k-1] + 1;
        
        if(k % 3 == 0)
        {
            dp_vector[k] = min(dp_vector[k], dp_vector[k/3] + 1);
        }
        
        if(k % 2 == 0)
        {
            dp_vector[k] = min(dp_vector[k], dp_vector[k/2] + 1);
        }
    }
    
    cout << dp_vector[X] << '\n';
    return 0;

}