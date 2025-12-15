#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    vector<int> dp_vector(10, 1);

    for (int k = 2; k <= N; k++)
    {
        for (int p = 1; p <= 9; p++)
        {
            dp_vector[p] = (dp_vector[p] + dp_vector[p-1]) % 10007;
        }
    }

    int result = 0;
    for (int p = 0; p <= 9; p++)
        result = result + dp_vector[p];

    cout << result % 10007 << '\n';
    return 0;
}