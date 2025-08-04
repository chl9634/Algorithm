#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    
    if(a < -999 || a > 999) return 0;
    if(b < -999 || b > 999) return 0;
    if(c < -999 || c > 999) return 0;
    if(d < -999 || d > 999) return 0;
    if(e < -999 || e > 999) return 0;
    if(f < -999 || f > 999) return 0;

    for (int x = -999; x <= 999; ++x) 
    {
        for (int y = -999; y <= 999; ++y) 
        {
            if (a * x + b * y == c && d * x + e * y == f) 
            {
                cout << x << " " << y << endl;
                return 0;
            }
        }
    }
    return 0;
}