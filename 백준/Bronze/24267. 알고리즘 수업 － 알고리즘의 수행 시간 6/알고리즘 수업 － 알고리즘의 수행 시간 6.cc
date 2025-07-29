#include <iostream>
using namespace std;

int main() 
{
    long long n;
    cin >> n;

    long long val = n * (n - 1) * (n - 2) / 6;

    cout << val << '\n';
    cout << 3 << '\n';

    return 0;
}