#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 1000)
        return 0;
    
    int num_arr[1000];
    for (int i = 0; i < N; i++) 
    {
        cin >> num_arr[i];
        
        if(num_arr[i] < -1000 || num_arr[i] > 1000)
            return 0;
    }
    
    sort(num_arr, num_arr + N);
    
    for (int i = 0; i < N; i++)
        cout << num_arr[i] << "\n";
    
    return 0;
}