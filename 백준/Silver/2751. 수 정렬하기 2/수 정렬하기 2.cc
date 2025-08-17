#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 1000000)
        return 0;
    
    vector<int> numbe_array(N);
    for (int i = 0; i < N; i++) 
    {
        cin >> numbe_array[i];
        if(numbe_array[i] < -1000000 || numbe_array[i] > 1000000)
            return 0;
    }

    sort(numbe_array.begin(), numbe_array.end());
    
    for (int i = 0; i < N; i++)
    {
        cout << numbe_array[i] << '\n';
    }
    return 0;
}