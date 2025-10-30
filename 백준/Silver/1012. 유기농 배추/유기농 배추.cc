#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int Y, int X, vector<vector<int>>& square, vector<vector<bool>>& visit, int M, int N)
{
    queue<pair<int, int>> node;
    node.push({Y, X});
    visit[Y][X] = true;

    while (!node.empty())
    {
        auto [y, x] = node.front();
        node.pop();
        
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

            if (new_y >= 0 && new_y < N && new_x >= 0 && new_x < M &&
                square[new_y][new_x] == 1 && !visit[new_y][new_x])
            {
                visit[new_y][new_x] = true;
                node.push({new_y, new_x});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    for (int a = 0; a < T; a++)
    { 
        int M, N, K;
        cin >> M >> N >> K;
        if(N < 1 || N > 50) return 0;
        if(M < 1 || M > 50) return 0;
        if(K < 1 || K > 2500) return 0;
    
        vector<vector<int>> square(N, vector<int>(M, 0));
        vector<vector<bool>> visit(N, vector<bool>(M, false));

        for (int i = 0; i < K; i++)
        {
            int X, Y;
            cin >> X >> Y;
            square[Y][X] = 1;
        }
   
        int count = 0;
        
        for (int y = 0; y < N; ++y)
        {
            for (int x = 0; x < M; ++x)
            {
                if (square[y][x] == 1 && !visit[y][x])
                {
                    bfs(y, x, square, visit, M, N);
                    count++;
                }
            }
        }
    

        cout << count << '\n';
        
    }
    return 0;
}