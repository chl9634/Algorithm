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
    for (unsigned long long i = 3; i * i <= n; i += 2) 
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

    int count; // 횟수
    cin >> count;
    while (count--) 
    {
        unsigned long long n;
        cin >> n;

        // n 이상이면서 가장 작은 소수 찾기
        while (true) 
        {
            if (Prime(n)) 
            {
                cout << n << '\n';
                break;         
            }
            n++; // 소수가 아니면 다음 수로 이동
        }
    }

    return 0;
}