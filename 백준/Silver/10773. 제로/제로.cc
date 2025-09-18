#include <iostream>
#include <stack>
using namespace std;

stack<int> stack_zero;

// 입력
void inputFunc(int K) 
{
    for (int i = 0; i < K; i++) 
    {
        int num;
        cin >> num;
        if (num == 0) 
        {
            if (!stack_zero.empty()) 
                stack_zero.pop();
        } 
        else
            stack_zero.push(num);
    }
}

// 합 계산
long long sum() 
{
    long long sum = 0;
    for (int i = 0; i < stack_zero.size(); i++)
    {
        sum += stack_zero.top();
        stack_zero.pop();
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;
    
    if(K < 1 || K > 1000000) return 0;

    inputFunc(K);
    cout << sum() << "\n";

    return 0;

}
