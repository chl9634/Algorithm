#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int x, y, z;
    cin >> x >> y >> z;

    int maximum = max({x, y, z});
    int sum = x + y + z;

    if (sum - maximum > maximum)
        cout << sum << '\n';
    else
        cout << (2 * (sum - maximum)) - 1 << '\n';

    return 0;
}