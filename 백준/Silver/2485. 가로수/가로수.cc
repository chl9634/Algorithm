#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 최대 공약수 구하기
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    if (N < 3 || N > 100000) return 0;

    vector<int> tree_pos(N); // 나무 위치
    vector<int> tree_diff; // 나무 간격 
    
    for (int i = 0; i < N; i++)
        cin >> tree_pos[i];

    for (int i = 1; i < N; i++)
        tree_diff.push_back(tree_pos[i] - tree_pos[i - 1]);

    int cur_gcd = tree_diff[0]; // 현재 최대 공약수
    
    for (int i = 1; i < tree_diff.size(); i++)
        cur_gcd = gcd(cur_gcd, tree_diff[i]);

    int total = (tree_pos[N - 1] - tree_pos[0]) / cur_gcd + 1; // 필요한 전체 나무
    int need_tree = total - N; // 추가로 필요한 나무

    cout << need_tree << "\n";

    return 0;
}
