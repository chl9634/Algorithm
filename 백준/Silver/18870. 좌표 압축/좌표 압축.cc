#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int N; 
    cin >> N;
    
    if(N < 1 || N >1000000)
        return 0;
    
    pair<int,int> input[1000000];
    int result[1000000];

    for (int i = 0; i < N; i++) 
    {
        cin >> input[i].first;
        input[i].second = i;
    }

    sort(input, input + N);

    int compress = 0;
    result[input[0].second] = compress;

    for (int i = 1; i < N; i++) 
    {
        if (input[i].first != input[i - 1].first) 
            compress++;
        
        result[input[i].second] = compress;
    }

    for (int i = 0; i < N; i++) 
    {
        cout << result[i] << ' ';
    }

    return 0;
}