#include <iostream>
using namespace std;

int main() {
    int A, B;

    while (true) 
    {
        cin >> A >> B;
        
        if (A > 10000 || B > 10000)
            return 0;
        
        if (A == 0 && B == 0)
            break;

        if (B % A == 0)
            cout << "factor" << endl;
        else if (A % B == 0)
            cout << "multiple" << endl;
        else
            cout << "neither" << endl;
    }

    return 0;
}