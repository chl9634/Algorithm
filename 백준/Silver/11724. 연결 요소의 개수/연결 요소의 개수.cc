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
    cin >> N >> M;
    
    if(N < 1 || N > 1000) return 0;
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

    int count = 0;

    for (int i = 1; i <= N; ++i)
    {
        if (!visit[i])
        {
            bfs(i, line, visit);
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}