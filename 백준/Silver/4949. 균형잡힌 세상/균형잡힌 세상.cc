#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool vps(string str) 
{
    stack<char> stack_vps;
    
    for (char ch : str) 
    {
        if (ch == '(' || ch == '[') // 여는 괄호 있으면 입력
        {
            stack_vps.push(ch);
        } 
        else if (ch == ')') // 닫는 소괄호
        {
            if (stack_vps.empty() || stack_vps.top() != '(') 
                return false;
            else
                stack_vps.pop();
        }
        else if (ch == ']') // 닫는 대괄호
        {
            if (stack_vps.empty() || stack_vps.top() != '[') 
                return false;
            else
                stack_vps.pop();
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

    string line;
    while (true) 
    {
        getline(cin, line);
        if (line == ".") 
            break;

        if (vps(line)) 
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
    return 0;
}