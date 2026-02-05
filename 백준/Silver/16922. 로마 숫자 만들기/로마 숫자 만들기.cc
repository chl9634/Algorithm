#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    if(N < 1 || N > 20) return 0;

    vector<bool> result(1001, false);

    for (int i = 0; i <= N; i++) 
    {
        for (int v = 0; v <= N - i; v++) 
        {
            for (int x = 0; x <= N - i - v; x++) 
            {
                int l = N - i - v - x;

                int sum = (i * 1) + (v * 5) + (x * 10) + (l * 50);
                result[sum] = true;
            }
        }
    }
    
    int count = 0;
    
    for(int i = 0; i <1001; i++)
    {
        if(result[i] == true)
            count++;
    }

    cout << count << endl;

    return 0;
}