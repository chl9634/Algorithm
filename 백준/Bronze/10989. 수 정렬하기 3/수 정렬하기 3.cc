#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 10000000)
        return 0;
    
    int array[10001] = {0};

    for (int k = 0; k < N; k++) 
    {
        int num;
        cin >> num;
        
        if(num < 1 || num > 10000)
            return 0;
        
        array[num]++;
    }

    for (int k = 1; k <= 10000; k++) 
    {
        while (array[k]--)
            cout << k << '\n';
    }
    
    return 0;
}