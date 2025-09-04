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

    int a_num, a_den, b_num, b_den; // a분자, a분모, b분자, b분모
    cin >> a_num >> a_den >> b_num >> b_den;
        
    long long num = (long long)a_num * b_den + (long long)b_num * a_den; // 통분 후 분자
    long long den = (long long)a_den * b_den; // 통분 후 분모

    long long g = gcd(num, den);

    cout << num / g << " " << den / g << "\n";


    return 0;
}