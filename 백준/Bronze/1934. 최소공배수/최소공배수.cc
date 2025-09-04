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

    int T;
    cin >> T;
    
    if(T < 1 || T > 1000) return 0;
    
    while (T--) 
    {
        int A, B;
        cin >> A >> B;
        
       if(A < 1 || A > 45000) return 0;
       if(B < 1 || B > 45000) return 0;

        int result = gcd(A, B);
        long long lcm = (long long)A * B / result;  // 유클리드 호제법

        cout << lcm << "\n";
    }

    return 0;
}