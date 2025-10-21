#include <iostream>
#include <string>
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

// 팰린드롬 판별하기
bool Palindrome(unsigned long long n)
{
    string str = to_string(n);
    string result = str;
    int size = str.size();
    for (int i = 0; i < size; i++)
        result[i] = str[size-i-1];

    if(str.compare(result) == 0)
        return true;
    else
        return false;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long n;
    cin >> n;

    while (true) 
    {
        if (Prime(n) && Palindrome(n)) 
        {
            cout << n << '\n';
            break;         
        }
        n++;
    }
    return 0;
}