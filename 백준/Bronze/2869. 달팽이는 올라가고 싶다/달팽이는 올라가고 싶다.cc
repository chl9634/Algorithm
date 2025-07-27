#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int A, B, V;
    cin >> A >> B >> V;

    int day = ceil((double)(V - B) / (A - B));
    cout << day << endl;
    return 0;
}