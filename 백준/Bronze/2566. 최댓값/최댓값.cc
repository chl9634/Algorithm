#include <iostream>
using namespace std;

int main() 
{
    int A[9][9];
    
    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++) 
            cin >> A[i][j];
    }
    
    int row, col, max = -1;

    for (int i = 0; i < 9; i++) 
    {
        for (int j = 0; j < 9; j++) 
        {
            if(A[i][j] > max)
            {
                max = A[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << max << "\n";
    cout << row+1 << " " << col+1 << "\n";


    return 0;
}