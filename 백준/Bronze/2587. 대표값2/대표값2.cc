#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int num_arr[5];
    int sum = 0;
    
    for (int i = 0; i < 5; i++) 
    {
        cin >> num_arr[i];
        
        if(num_arr[i] > 100 || num_arr[i] % 10 != 0)
            return 0;
        
        sum += num_arr[i];
    }
    
    int average = sum / 5;
    sort(num_arr, num_arr + 5);
    int middle = num_arr[2];
    
    cout << average << endl;
    cout << middle << endl;
    
    return 0;
}