#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(int Y, int X, vector<vector<int>>& square, vector<vector<bool>>& visit, int M, int N)
{
    queue<pair<int, int>> node;
    node.push({Y, X});
    visit[Y][X] = true;
    int range = 0;

    while (!node.empty())
    {
        auto [y, x] = node.front();
        node.pop();
        range++;
        
        vector<pair<int, int>> find = 
        {
            {-1,0},
            {1,0},
            {0,-1}, 
            {0,1}
        };

        for (auto [move_y, move_x] : find)
        {
            int new_y = y + move_y;
            int new_x = x + move_x;

            if (new_y >= 0 && new_y < M && new_x >= 0 && new_x < N &&
                square[new_y][new_x] == 0 && !visit[new_y][new_x])
            {
                visit[new_y][new_x] = true;
                node.push({new_y, new_x});
            }
        }
    }
    return range;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int M, N, K;
    cin >> M >> N >> K;
    if(N < 1 || N > 100) return 0;
    if(M < 1 || M > 100) return 0;
    if(K < 1 || K > 100) return 0;
    
    vector<vector<int>> square(M, vector<int>(N, 0));
    vector<vector<bool>> visit(M, vector<bool>(N, false));
    vector<int> volume;

    for (int i = 0; i < K; i++) 
    {
        int x_start, y_start, x_end, y_end;
        cin >> x_start >> y_start >> x_end >> y_end;
        for (int y = y_start; y < y_end; y++)
            for (int x = x_start; x < x_end; x++)
                square[y][x] = 1;
    }
   
    for (int y = 0; y < M; ++y)
    {
        for (int x = 0; x < N; ++x)
        {
            if (square[y][x] == 0 && !visit[y][x])
            {
                int range = bfs(y, x, square, visit, M, N);
                volume.push_back(range);
            }
        }
    }
    
    sort(volume.begin(), volume.end());
    
    cout << volume.size() << '\n';
    for (int i = 0; i < volume.size(); i++) 
    {
        cout << volume[i] << " ";
    }
    cout << '\n';
        
    
    return 0;
}