#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int n, count = 0;
    cin >> n;

    for (int k = 0; k < n; k++) 
    {
        string word;
        cin >> word;

        bool alphabet[26] = {0, };
        bool bGroup = true;
        char prev = ' ';

        for (char c : word) 
        {
            if (c != prev) 
            {
                if (alphabet[c - 'a'] == true) 
                {
                    bGroup = false;
                    break;
                }
                alphabet[c - 'a'] = true;
            }
            prev = c;
        }

        if (bGroup) 
            count++;
    }

    cout << count << endl;
    return 0;
}