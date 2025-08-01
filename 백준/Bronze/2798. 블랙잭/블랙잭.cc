#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() 
{
    int N, M;
    
    cin >> N >> M;
    
    if (N < 3 || N > 100)
        return 0;
    
    if (M < 10 || M > 300000)
        return 0;
    
    int arr[100] = {0,};
    int max = -1;
    int sum = -1;
    for(int i = 0; i < N; i++)
        cin >> arr[i];
    
    for(int i = 0; i < N - 2; i++) 
    {
        for(int j = i + 1; j < N - 1; j++) 
        {
            for(int k = j + 1; k < N; k++) 
            {
                sum = arr[i] + arr[j] + arr[k];
                if(sum <= M && sum > max)
                    max = sum;
            }
        }
    }

    cout << max << endl;
    
    return 0;
}