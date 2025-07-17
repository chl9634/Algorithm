#include <iostream>
using namespace std;

int main() 
{
    int line_dot = 2;
    int count;
    cin >> count;
    
    if(count < 1 || count > 15)
        return 0;

    for (int i = 0; i < count; i++) 
        line_dot = line_dot + (line_dot - 1);
    
    cout << line_dot * line_dot << endl; 
}