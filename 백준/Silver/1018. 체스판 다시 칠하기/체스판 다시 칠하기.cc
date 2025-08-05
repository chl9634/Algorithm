#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    if(N < 8 || N > 50 || M < 8 || M > 50)
        return 0;

    char board[50][50];
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++)
            cin >> board[i][j];
    }

    int minCount = 64;

    for (int i = 0; i <= N - 8; i++) 
    {
        for (int j = 0; j <= M - 8; j++) 
        {
            int p1 = 0, p2 = 0;
            
            for (int p = 0; p < 8; p++) 
            {
                for (int q = 0; q < 8; q++) 
                {
                    char point = board[i + p][j + q];
                    if ((p + q) % 2 == 0) 
                    {
                        if (point != 'W') 
                            p1++;
                        if (point != 'B') 
                            p2++;
                    } 
                    else 
                    {
                        if (point != 'B') 
                            p1++;
                        if (point != 'W') 
                            p2++;
                    }
                }
            }

            int minimum = min(p1, p2);
            if (minimum < minCount) minCount = minimum;
        }
    }
    cout << minCount << '\n';
    return 0;

}
