#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cctype>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    
    if(N < 1 || N > 100000)
        return 0;
    
    if(M < 1 || M > 100000)
        return 0;

    vector<string> num_name(N + 1);
    map<string, int> name_num;

    for (int i = 1; i <= N; i++) 
    {
        string name;
        cin >> name;
        num_name[i] = name;
        name_num[name] = i;
    }

    while (M--) 
    {
        string query;
        cin >> query;

        if (isdigit(query[0])) 
        {
            int idx = stoi(query);
            cout << num_name[idx] << '\n';
        } 
        else 
            cout << name_num[query] << '\n';
    }

    return 0;
}