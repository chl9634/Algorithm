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
    
    if(N < 1 || N > 100000) return 0;

    pair<unsigned int, unsigned int> time[N];
    
    for (int i = 0; i < N; i++)
        cin >> time[i].first >> time[i].second;
    
    sort(time, time+N, [](auto &a, auto &b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second < b.second;
    });

    int count = 0;
    int finishTime = 0;

    for (int i = 0; i < N; i++) 
    {
        if (time[i].first >= finishTime) 
        {
            count++;
            finishTime = time[i].second;
        }
    }

    cout << count << "\n";

    return 0;
}