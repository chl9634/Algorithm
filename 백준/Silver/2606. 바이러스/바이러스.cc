#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& line, vector<bool>& visit)
{
    queue<int> node;
    node.push(start);
    visit[start] = true;

    while (!node.empty())
    {
        int pos = node.front(); 
        node.pop();

        for (int next : line[pos])
        {
            if (!visit[next])
            {
                visit[next] = true;
                node.push(next);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N;
    if(N < 1 || N > 100) return 0;
    
    cin >> M;
    if (M < 0 || M > (N * (N - 1) / 2)) return 0;

    vector<vector<int>> line(N+1);
    vector<bool> visit(N+1, false);

    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        line[u].push_back(v);
        line[v].push_back(u);
    }
    
    bfs(1, line, visit);
    
    int count = 0;
    for (int i = 2; i <= N; i++)
    {
        if (visit[i]) 
            count++;
    }
    

    cout << count << '\n';
    return 0;
}