#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;


void func(vector<string>& A, int x, int y) 
{
    for (int i = x; i < x + 3; i++) 
    {
        for (int j = y; j < y + 3; j++) 
        {
            if(A[i][j] == '0')
                A[i][j] = '1';
            else
                A[i][j] = '0';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, M;
    cin >> N >> M;
    if(N < 1 || N > 50) return 0;
    if(M < 1 || M > 50) return 0;
    
    cin.ignore(); 

    vector<string> A, B;
    A.resize(N);
    B.resize(N);

    for (int i = 0; i < N; i++)
        getline(cin, A[i]);

    for (int i = 0; i < N; i++)
        getline(cin, B[i]);

    int count = 0;

    for (int i = 0; i <= N - 3; i++) 
    {
        for (int j = 0; j <= M - 3; j++) 
        {
            if (A[i][j] != B[i][j]) 
            {
                func(A, i, j);
                count++;
            }
        }
    }

    if (A == B) 
        cout << count << '\n';
    else 
        cout << -1 << '\n';

    return 0;
}