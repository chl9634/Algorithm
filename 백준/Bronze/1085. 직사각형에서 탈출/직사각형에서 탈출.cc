#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    
    if(w < 1 || w > 1000)
        return 0;
    
    if(h < 1 || h > 1000)
        return 0;
    
    int result = min( min(x, y), min(w - x, h - y) );
    cout << result;
    return 0;
}