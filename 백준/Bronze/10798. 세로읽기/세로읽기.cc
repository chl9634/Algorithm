#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
    string arr[5];
    
    for(int k = 0; k < 5; k++)
        cin >> arr[k];
    
    for(int i = 0; i < 15; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i < arr[j].size())
                cout << arr[j].substr(i,1);
        }  
    }
    return 0;
}