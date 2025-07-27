#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int N, count = 0;
    cin >> N;

    if (N > 100)
        return 0;
    
    for (int i = 0; i < N; i++) 
    {
        int num;
        cin >> num;

        if (num > 1000)
            return 0;
        
        if (num < 2) 
            continue;

        bool b = true;
        int limit = (int)sqrt(num);
        for (int j = 2; j <= limit; j++) 
        {
            if (num % j == 0) 
            {
                b = false;
                break;
            }
        }

        if (b) 
            count++;
    }

    cout << count << endl;
    return 0;
}