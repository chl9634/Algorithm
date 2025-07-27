#include <iostream>
using namespace std;

int main() 
{
    int n;

    while (true) {
        cin >> n;
        
        if (n < 2 || n > 100000)
            return 0;
        
        if (n == -1) 
            break;

        int sum = 0;
        bool first = true;

        for (int i = 1; i < n; ++i) 
        {
            if (n % i == 0)
                sum += i;
        }

        if (sum == n) 
        {
            cout << n << " = ";
            for (int k = 1; k < n; k++) 
            {
                if (n % k == 0) {
                    if (!first) cout << " + ";
                    cout << k;
                    first = false;
                }
            }
            cout << endl;
        } 
        else
            cout << n << " is NOT perfect." << endl;
    }

    return 0;
}