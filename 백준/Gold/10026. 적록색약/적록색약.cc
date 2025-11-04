#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int Y, int X, vector<vector<char>>& grid, vector<vector<bool>>& visit, int N)
{
    queue<pair<int, int>> node;
    node.push({Y, X});
    visit[Y][X] = true;
    char target = grid[Y][X]; 

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
            if (new_y >= 0 && new_y < N && new_x >= 0 && new_x < N &&
                grid[new_y][new_x] == target && !visit[new_y][new_x])
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
    
    int N;
    cin >> N;

    vector<vector<char>> grid(N, vector<char>(N));
    for (int i = 0; i < N; i++) 
    {
        string str; 
        cin >> str;
        for (int j = 0; j < N; ++j) 
            grid[i][j] = str[j];
    }

    vector<vector<bool>> visit(N, vector<bool>(N, false));
    int count_normal = 0;

    for (int y = 0; y < N; y++) 
    {
        for (int x = 0; x < N; x++) 
        {
            if (grid[y][x] != 0 && !visit[y][x]) 
            {
                bfs(y, x, grid, visit, N);
                count_normal++;
            }
        }
    }

    vector<vector<char>> grid_disable = grid; 
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (grid_disable[i][j] == 'G') 
                grid_disable[i][j] = 'R';
        }
    }

    vector<vector<bool>> visit_disable(N, vector<bool>(N, false));
    int count_disable = 0;

    for (int y = 0; y < N; y++) 
    {
        for (int x = 0; x < N; x++) 
        {
            if (grid_disable[y][x] != 0 && !visit_disable[y][x]) 
            {
                bfs(y, x, grid_disable, visit_disable, N);
                count_disable++;
            }
        }
    }

    cout << count_normal << ' ' << count_disable << '\n';
    return 0;
}