#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{   
    int N;
    cin >> N;
    
    if(N < 1 || N >100000)
        return 0;
    
    pair<int, int> points[100001];
    
    for (int i = 0; i < N; i++) 
    {
        int x, y;
        cin >> x >> y;
        points[i] = {y, x};
    }
    
    sort(points, points + N);
    
    for (int i = 0; i < N; i++)
        cout << points[i].second << " " << points[i].first << "\n";
    
    return 0;
}