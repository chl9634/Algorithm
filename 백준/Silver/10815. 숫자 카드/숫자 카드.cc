#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, M; 
    cin >> N;
    
    if(N < 1 || N >500000)
        return 0;
    
    int first_card[500000];
    int second_card[500000];
    
    for(int i=0; i<N; i++)
    {
        cin >> first_card[i];
        
        if(first_card[i] < -10000000 || first_card[i] > 10000000)
            return 0;
    }
    
    cin >> M;
    
    if(M < 1 || M >500000)
        return 0;
    
    for(int i=0; i<M; i++)
    {
        cin >> second_card[i];
        
        if(second_card[i] < -10000000 || second_card[i] > 10000000)
            return 0;
    }
    
    sort(first_card, first_card + N);

    for(int i = 0; i < M; i++)
    {
        if (binary_search(first_card, first_card + N, second_card[i]))
            cout << "1 ";
        else
            cout << "0 ";
    }

    cout << "\n";
    return 0;
}