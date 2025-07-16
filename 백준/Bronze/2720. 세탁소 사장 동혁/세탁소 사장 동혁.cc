#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int count;
    cin >> count;
    
    int money = 0;
    for(int k=0; k<count; k++)
    {
        int quarter = 0, dime = 0, nickel = 0, penny = 0;
        int temp;
        cin >> money;
        if(money < 1 || money > 500)
            return 0;
        
        quarter = money/25;
        temp = money%25;
        dime = temp/10;
        temp %= 10;
        nickel = temp/5;
        penny = temp%5;
        
        cout << quarter << " " << dime << " " << nickel << " " << penny << endl;
    }
}