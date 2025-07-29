#include <iostream>
using namespace std;

int main() 
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int rx = x1 ^ x2 ^ x3;
    int ry = y1 ^ y2 ^ y3;

    cout << rx << " " << ry;
    return 0;
}