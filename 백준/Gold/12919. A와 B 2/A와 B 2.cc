#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

// A ... A = 뒤의 A 제거
// A ... B = 경우 X
// B ... B = 앞의 B 제거 후 뒤집기
// B ... A = 두 경우 모두 가능하므로 재귀로 탐색

void dfs(string S, string T, bool &result) 
{

    if (result == true)
        return;
    
    if (S == T) 
    {
        result = true;
        return;
    }
    
    if (T.size() < S.size()) 
        return;
    
    // 뒤에 A가 있으면 제거하고 재귀
    if (T.back() == 'A') 
    {
        string str = T.substr(0, T.size() - 1);
        dfs(S, str, result);
    }

    // 앞에 B가 있으면 제거한 뒤 뒤집고 재귀
    if (T.front() == 'B') 
    {
        string str = T.substr(1);
        reverse(str.begin(), str.end());
        dfs(S, str, result);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string S, T;
    cin >> S >> T;
    
    if(S.size() < 1 || S.size() > 49) return 0;
    if(T.size() < 2 || T.size() > 50) return 0;
    
    bool result = false;
    
    dfs(S, T, result);

    if (result == true) 
        cout << 1 << "\n";
    else 
        cout << 0 << "\n";
    return 0;
}