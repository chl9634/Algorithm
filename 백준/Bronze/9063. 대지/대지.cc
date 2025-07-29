#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, x, y;
    cin >> N;
    
    if(N < 1 || N > 100000)
        return 0;

    int min_x = 10001;
    int max_x = -10001;
    int min_y = 10001;
    int max_y = -10001;

    for (int i = 0; i < N; ++i) 
    {
        cin >> x >> y;
        
        min_x = min(min_x, x);
        max_x = max(max_x, x);
        min_y = min(min_y, y);
        max_y = max(max_y, y);
    }

    cout << (long long)(max_x - min_x) * (max_y - min_y) << '\n';
    return 0;
}