#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long N;
    cin >> N;
    
    if (N < 1 || N > 2'100'000'000) return 0;

    // 약수가 홀수 = 제곱수
    unsigned long long result = (unsigned long long)sqrt(N);
    cout << result << '\n';

    return 0;
}