#include <iostream>
using namespace std;

int main() 
{
    int X;
    cin >> X;
    
    if(X < 1 || X > 10000000)
        return 0;

    int sum = 0, line = 0;
    while (sum < X) 
    {
        line++;
        sum += line;
    }

    int line_now = X - (sum - line);
    int x, y;

    if (line % 2 == 0) {
        x = line_now;
        y = line - line_now + 1;
    } else {
        x = line - line_now + 1;
        y = line_now;
    }

    cout << x << "/" << y << endl;
    return 0;
}