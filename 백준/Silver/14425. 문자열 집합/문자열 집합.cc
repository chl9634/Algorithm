#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, M; 
    cin >> N >> M;
    
    if(N < 1 || N > 10000 || M < 1 || M > 10000)
        return 0;
    
    string Set_S[10000];
    string find[10000];
    
    for(int i = 0; i < N; i++)
        cin >> Set_S[i];
    
    for(int i = 0; i < M; i++)
        cin >> find[i];
    
    sort(Set_S, Set_S + N);

    int count = 0;
    for (int i = 0; i < M; i++) 
    {
        if (binary_search(Set_S, Set_S + N, find[i]))
            count++;
    }

    cout << count << "\n";
    return 0;

}