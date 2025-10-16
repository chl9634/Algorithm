#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    
    if(N < 1 || N > 100) return 0;
    if(K < 1 || K > 100000) return 0;
    
    vector<int> weight(N);
    vector<int> value(N);
    
    for (int i = 0; i < N; i++)
        cin >> weight[i] >> value[i];
    
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));

    for (int i = 1; i <= N; i++) // i번째까지 물건 갯수
    {
        for (int j = 1; j <= K; j++) // k까지의 물건의 무게
        {
            if (weight[i - 1] > j) // 현재까지 물건 무게 합이 최대치를 초과하면 직전 결과 적용
                dp[i][j] = dp[i - 1][j];
            else // 이전 상태, 무게를 빼고 가치를 더한 값을 비교하여 큰 값을 적용
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i - 1]] + value[i - 1]);
        }
    }
    
    // N개의 물건일때 최대 무게 K일때 까지의 최대 가치
    cout << dp[N][K] << '\n';
    
//    int maximum = 0;
//    for (int i = 0; i < N; i++) 
//    {
//        int sum_W = 0;
//        int sum_V = 0;
//        for (int j = i; j < N; j++) 
//        {
//            sum_W += weight[j];
//            if (sum_W > K) 
//                break;
//            
//            sum_V += value[j];
//            maximum = max(maximum, sum_V);
//        }
//    }
//
//    cout << maximum << "\n";

    return 0;
}