#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if(N < 2 || N > 100) return 0;

    vector<unsigned long long> vec(N);
    for (int i = 0; i < N; i++) 
        cin >> vec[i];

    sort(vec.begin(), vec.end());

    vector<unsigned long long> result;
    vector<bool> use(N, false);

    result.push_back(vec[0]);
    use[0] = true;

    while (result.size() < N) 
    {
        for (int i = 0; i < N; i++) 
        {
            if (use[i]) 
                continue;

            unsigned long long front = result.front();
            unsigned long long back = result.back();
            unsigned long long value = vec[i];

            if ((back * 2 == value) || (back % 3 == 0 && back / 3 == value)) 
            {
                result.push_back(value);
                use[i] = true;
                break; 
            }
            else if ((value * 2 == front) || (value % 3 == 0 && value / 3 == front)) 
            {
                result.insert(result.begin(), value);
                use[i] = true;
                break;
            }
        }
    }

    for (int i = 0; i < result.size(); i++) 
        cout << result[i] << " ";

    return 0;
}