#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int A[100][100], B[100][100];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            cin >> A[i][j];
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            cin >> B[i][j];
    }

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
            cout << A[i][j] + B[i][j] << " ";
        
        cout << "\n";
    }

    return 0;
}