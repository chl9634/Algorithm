#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    
    if(N < 1 || N > 500000) return 0;
    if(M < 1 || M > 500000) return 0;

    unordered_map<string, bool> human;
    vector<string> result;
    string name;

    for (int i = 0; i < N; i++) 
    {
        cin >> name;
        human[name] = true;
    }

    for (int i = 0; i < M; i++) 
    {
        cin >> name;
        if (human[name])
            result.push_back(name);
    }

    sort(result.begin(), result.end());

    cout << result.size() << '\n';
    for (const auto& p : result)
        cout << p << '\n';

    return 0;
}