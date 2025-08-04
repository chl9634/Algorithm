#include <iostream>
#include <cstdio>
#include <cstring> 
#include <string>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 1000000)
        return 0;
    
    char arr[7];
    for (int i = 1; i < N; ++i) 
    {
        int sum = i;
        sprintf(arr, "%d", i);

        for (int j = 0; j < strlen(arr); ++j)
            sum += arr[j] - '0';

        if (sum == N)
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}