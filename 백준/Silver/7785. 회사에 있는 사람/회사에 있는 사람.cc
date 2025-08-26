#include <iostream>
#include <map>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    if (n < 1 || n > 1000000)
        return 0;

    map<string, bool, greater<string>> entry;
    string name, pass;
    while (n--) 
    {
        cin >> name >> pass;
        if (pass == "enter")
            entry[name] = true;
        else
            entry.erase(name);
    }


    for (const auto& p : entry)
        cout << p.first << '\n';

    return 0;
}