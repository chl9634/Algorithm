#include <iostream>
using namespace std;

int main() 
{
    int count;
    cin >> count;
    
    if(count > 100)
        return 0;

    int A[100][100] = {0};
    int x, y;
    for (int i = 0; i < count; i++) 
    {
        cin >> x >> y;
        
        for(int n = x; n < x + 10; n++)
        {
            for(int m = y; m < y + 10; m++)
            {
                A[n][m] = 1;
            }
        }
    }
    
    int size_count = 0;
    for(int p = 0; p < 100; p++)
    {
        for(int q = 0; q < 100; q++)
        {
            if(A[p][q] == 1)
                size_count++;
        }
    }
    
    cout << size_count;

    return 0;
}