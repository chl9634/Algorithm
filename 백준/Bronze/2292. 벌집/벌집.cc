#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin >> num;

    int stair = 1;
    int range = 1;
    
    while (num > range) 
    {
        range += stair * 6;
        stair++;
    }

    cout << stair << endl;
    return 0;
}