#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int min = -1;

    for (int num = M; num <= N; num++) 
    {
        if (M > 10000 || N > 10000)
            return 0;
        
        if (num < 2) 
            continue;

        bool b = true;
        int limit = (int)sqrt(num);

        for (int i = 2; i <= limit; i++) 
        {
            if (num % i == 0) 
            {
                b = false;
                break;
            }
        }

        if (b) 
        {
            sum += num;
            if (min == -1) 
                min = num;
        }
    }

    if (sum == 0)
        cout << -1 << '\n';
    else 
    {
        cout << sum << '\n';
        cout << min << '\n';
    }

    return 0;
}