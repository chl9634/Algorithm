#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 20000)
        return 0;

    string words[20000];

    for (int i = 0; i < N; ++i)
        cin >> words[i];

    sort(words, words + N);

    int unique = 1;
    for (int i = 1; i < N; ++i) 
    {
        if (words[i] != words[unique - 1])
            words[unique++] = words[i];
    }

    sort(words, words + unique, [](const string &a, const string &b) {
        if (a.length() < b.length()) 
            return true;
        else if (a.length() > b.length()) 
            return false;
        else 
            return a < b;
    });

    for (int i = 0; i < unique; ++i)
        cout << words[i] << '\n';

    return 0;
}