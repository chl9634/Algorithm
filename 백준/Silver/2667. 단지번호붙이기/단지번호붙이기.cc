#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int bfs(int y, int x, vector<vector<int>>& square, vector<vector<bool>>& visit, int N)
{
    queue<pair<int,int>> node;
    node.push({y, x});
    visit[y][x] = true;
    int cnt = 1;

    vector<pair<int,int>> find = {{-1,0},{1,0},{0,-1},{0,1}};
    while (!node.empty())
    {
        auto [y, x] = node.front(); 
        node.pop();
        for (auto [move_y, move_x] : find)
        {
            int new_y = y + move_y;
            int new_x = x + move_x;
            if (new_y>=0 && new_y<N && new_x>=0 && new_x<N && 
                square[new_y][new_x]==1 && !visit[new_y][new_x])
            {
                visit[new_y][new_x] = true;
                node.push({new_y, new_x});
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin >> N;
    
    if(N < 5 || N > 25) return 0;
    
    vector<vector<int>>  square(N, vector<int>(N));
    vector<vector<bool>> visit(N, vector<bool>(N, false));

    for (int i = 0; i < N; i++)
    {
        string s; 
        cin >> s;
        for (int j = 0; j < N; j++) 
            square[i][j] = s[j] - '0';
    }

    vector<int> size_array;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (square[i][j] == 1 && !visit[i][j])
                size_array.push_back(bfs(i, j, square, visit, N));

    sort(size_array.begin(), size_array.end());
    cout << size_array.size() << '\n';
    
    for (int size : size_array) 
        cout << size << '\n';
}