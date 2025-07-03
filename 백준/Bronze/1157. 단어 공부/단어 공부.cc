#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    int alphabet[26] = {0};
    string input;

    cin >> input;

    for (int k = 0; k < input.size(); k++)
    {
        input[k] = toupper(input[k]);
        alphabet[input[k] - 'A']++; 
    }

    int max_value = 0;
    int max_index = 0;
    int max_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > max_value)
            max_value = alphabet[i];
    }

    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == max_value)
        {
            max_count++;
            max_index = i;
        }
    }

    if (max_count > 1)
        cout << '?' << endl;
    else
        cout << static_cast<char>('A' + max_index) << endl;

    return 0;
}
