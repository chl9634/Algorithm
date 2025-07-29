#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int x, y, z;
    while (true) 
    {
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0) 
            break;
        
        if (x > 1000 || y > 1000 || z > 1000)
            return 0;

        int maximum = max({x, y, z});
        int sum = x + y + z - maximum;

        if (maximum >= sum)
            cout << "Invalid\n";
        else if (x == y && y == z)
            cout << "Equilateral\n";
        else if (x == y || y == z || x == z)
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }

    return 0;
}