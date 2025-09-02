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

    int count_A, count_B;
    cin >> count_A >> count_B;
    
    if(count_A < 1 || count_A > 200000) return 0;
    if(count_B < 1 || count_B > 200000) return 0; 
    
    set<int> A, B;
    int element_A, element_B; 
    
    for (int i = 0; i < count_A; i++) 
    {
        cin >> element_A;
        if(element_A > 100'000'000)
            return 0;
        A.insert(element_A);
    }
    for (int i = 0; i < count_B; i++) 
    {
        cin >> element_B;
        if(element_B > 100'000'000)
            return 0;
        B.insert(element_B);
    }
    
    int cnt = 0;

    for (int x : A) 
    {
        if (B.count(x) == 0)
            cnt++;
    }

    for (int x : B) 
    {
        if (A.count(x) == 0)
            cnt++;
    }
    
    cout << cnt << "\n";
    return 0;
}