#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(queue<pair<int,int>>& q, vector<vector<int>>& storage, int N, int M)
{
    vector<pair<int, int>> move = {
        {-1, 0}, {1, 0}, {0, -1}, {0, 1}
    };

    while (!q.empty())
    {
        auto [y, x] = q.front();
        q.pop();

        for (auto [dy, dx] : move)
        {
            int ny = y + dy;
            int nx = x + dx;

            if (ny >= 0 && ny < N && nx >= 0 && nx < M)
            {
                if (storage[ny][nx] == 0)
                {
                    storage[ny][nx] = storage[y][x] + 1;
                    q.push({ny, nx});
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;

    vector<vector<int>> storage(N, vector<int>(M));
    queue<pair<int,int>> q;
    
    bool ripe = false; 
    bool unripe = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> storage[i][j];

            if (storage[i][j] == 1)
            {
                ripe = true;
                q.push({i, j});
            }
            else if (storage[i][j] == 0)
                unripe = true;
        }
    }

    if (!ripe) { 
        cout << -1 << '\n'; 
        return 0; 
    }
    if (!unripe) { 
        cout << 0 << '\n'; 
        return 0; 
    }

    bfs(q, storage, N, M);

    int days = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (storage[i][j] == 0)
            {
                cout << -1 << '\n';
                return 0;
            }
            days = max(days, storage[i][j]);
        }
    }

    cout << days - 1 << '\n';
    return 0;
}