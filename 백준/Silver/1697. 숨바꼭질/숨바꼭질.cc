#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int max = 200'010;
    
    int N, K;
    cin >> N >> K;

    if (N == K) 
    {
        cout << 0 << '\n';
        return 0;
    }
    
    if (N - K == 1 || K - N == 1)
    {
        cout << 1 << '\n';
        return 0;
    }

    vector<int> distance(max, -1);
    queue<int> q;

    q.push(N);
    distance[N] = 0;

    while (!q.empty()) 
    {
        int x = q.front();
        q.pop();

        if (x * 2 < max && distance[x * 2] == -1) 
        {
            distance[x * 2] = distance[x] + 1;
            q.push(x * 2);
            if (x * 2 == K) 
            {
                cout << distance[x * 2] << '\n';
                return 0;
            }
        }

        if (x + 1 < max && distance[x + 1] == -1) 
        {
            distance[x + 1] = distance[x] + 1;
            q.push(x + 1);
            if (x + 1 == K) 
            {
                cout << distance[x + 1] << '\n';
                return 0;
            }
        }

        if (x - 1 >= 0 && distance[x - 1] == -1) 
        {
            distance[x - 1] = distance[x] + 1;
            q.push(x - 1);
            if (x - 1 == K) 
            {
                cout << distance[x - 1] << '\n';
                return 0;
            }
        }
    }

    return 0;
}