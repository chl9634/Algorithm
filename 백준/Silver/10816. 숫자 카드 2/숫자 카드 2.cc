#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M; 
    int x;
    
    cin >> N;
    
    if(N < 1 || N > 500000)
        return 0;

    unordered_map<int, int> map;

    for (int i = 0; i < N; i++) 
    {
        cin >> x;
        if(x < -10000000 || x > 10000000)
            return 0;
        map[x]++;
    }

    cin >> M;
 
    if(M < 1 || M > 500000)
        return 0;
    
    for (int i = 0; i < M; i++) 
    {
        cin >> x;
        if(x < -10000000 || x > 10000000)
            return 0;
        cout << map[x] << " ";
    }
    cout << "\n";
    return 0;
}