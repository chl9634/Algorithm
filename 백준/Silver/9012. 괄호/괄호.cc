#include <iostream>
#include <stack>
#include <string>
using namespace std;

// vps 판단 함수
bool vps(string str) 
{
    stack<char> stack_vps;
    
    for (char ch : str) 
    {
        if (ch == '(') // 여는 괄호 있으면 입력
        {
            stack_vps.push(ch);
        } 
        else if (ch == ')') // 닫는 괄호
        {
            if (stack_vps.empty()) // 대응되는 여는 괄호가 없으면 false
            {
                return false;
            } 
            else // 대응되는 여는 괄호가 있을때
            {
                stack_vps.pop();
            }
        }
    }
    if(stack_vps.empty())
        return true; // 모든 괄호끼리 짝이 맞으면 스택이 비어있음
    else
        return false; // 비어있지 않으면 짝이 안맞음
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) 
    {
        string str;
        cin >> str;
        
        if(str.length() < 2 || str.length() > 50) return 0;
        if (vps(str))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}