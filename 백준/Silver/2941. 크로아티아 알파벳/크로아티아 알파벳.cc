#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    
    string alpha;
    string alphabet[] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    int count = 0;

    for (int i = 0; i < str.length();) 
    {
        bool match = false;

        for (int j = 0; j < 8; j++) 
        {
            alpha = alphabet[j];
            int length = alpha.length();
            if (str.substr(i, length) == alpha) 
            {
                match = true;
                i += length;
                break;
            }
        }

        if (!match) 
            i++;

        count++;
    }

    cout << count << endl;
    return 0;
}