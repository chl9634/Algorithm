#include <iostream>
#include <cmath>
using namespace std;


// 소수 판별하기
bool Prime(unsigned long long n) 
{
    if (n < 2) // 2 미만은 소수 x
        return false;
    
    if (n == 2) // 2는 가장 작은 소수
        return true;
    
    if (n % 2 == 0) // 짝수는 소수 x
        return false;
    
    // 3부터 n의 제곱근까지 검사
    for (unsigned long long i = 3; i <= sqrt(n); i += 2) 
    {
        if (n % i == 0) 
            return false;
    }
    return true;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int M, N;
    cin >> M >> N;
    
    if (M < 1 || M > 1'000'000) return 0;
    if (N < 1 || N > 1'000'000) return 0;   
    
    for (int i = M; i <= N; ++i) 
    {
        if (Prime(i)) 
            cout << i << '\n';
    }

    return 0;
}