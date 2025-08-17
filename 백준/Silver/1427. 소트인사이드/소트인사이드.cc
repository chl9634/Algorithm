#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    string str;
    cin >> str;

    int number[10];
    int length = str.length();

    for (int i = 0; i < length; i++)
        number[i] = str[i] - '0';

    sort(number, number + length, greater<int>());

    for (int i = 0; i < length; i++)
        cout << number[i];

    cout << "\n";

    return 0;
}