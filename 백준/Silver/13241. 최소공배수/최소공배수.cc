#include <iostream>
using namespace std;

// 최대 공약수 구하기
int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B;
    cin >> A >> B;
        
    int result = gcd(A, B);
    long long lcm = (long long)A * B / result;  // 유클리드 호제법

    cout << lcm << "\n";


    return 0;
}