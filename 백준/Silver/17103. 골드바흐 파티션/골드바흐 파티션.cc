#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<bool> Prime(1'000'001, true);

//// 소수 판별하기
//bool Prime(unsigned long long n) 
//{
//    if (n < 2) // 2 미만은 소수 x
//        return false;
//    
//    if (n == 2) // 2는 가장 작은 소수
//        return true;
//    
//    if (n % 2 == 0) // 짝수는 소수 x
//        return false;
//    
//    // 3부터 n의 제곱근까지 검사
//    for (unsigned long long i = 3; i <= sqrt(n); i += 2) 
//    {
//        if (n % i == 0) 
//            return false;
//    }
//    return true;
//}

// 에라토스테네스의 체
void eratosthenes() 
{
    Prime[0] = Prime[1] = false;

    for (int i = 2; i * i <= 1'000'000; i++) 
    {
        if (Prime[i]) 
        {
            for (int j = i * i; j <= 1'000'000; j += i)
                Prime[j] = false;
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    
    if(T < 1 || T > 100) return 0;

    eratosthenes();
    
    while (T--) 
    {
        int N; // 입력값
        cin >> N;
        
        if(N < 2 || N > 1'000'000) return 0;
        
        int count = 0;

        for (int a = 2; a <= N / 2; a++) 
        {
            int b = N - a;
            if (Prime[a] == true && Prime[b] == true) 
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}