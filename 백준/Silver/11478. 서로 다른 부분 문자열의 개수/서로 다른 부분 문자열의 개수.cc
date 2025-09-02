#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin >> S;
    
    set<string> element;
    
    int size = S.size();
    for (int i = 0; i < size; i++) 
    {
        for (int j = i; j < size; j++) 
        {
            element.insert(S.substr(i, j - i + 1));
        }
    }
    
    cout << element.size() << "\n";
    return 0;
}