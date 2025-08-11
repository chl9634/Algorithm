#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int N, k;
    cin >> N >> k;
    
    if(N < 1 || N > 1000)
        return 0;
    
    if(k < 1 || k > N)
        return 0;
    
    int num_arr[1000];
    

    for (int i = 0; i < N; i++) 
    {
        cin >> num_arr[i];
        
        if(num_arr[i] > 10000 || num_arr[i] < 0)
            return 0;
    }
    
    sort(num_arr, num_arr + N);
    reverse(num_arr, num_arr + N);
    
    cout << num_arr[k-1] << endl;
    
    return 0;
}