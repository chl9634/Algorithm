#include <iostream>
#include <stack>
using namespace std;

stack<int> st;

// 1 : 정수 입력
void cmd_1(int x) 
{
    st.push(x);
}

// 2: 정수 출력, 비어있으면 -1
void cmd_2() 
{
    if (st.empty()) 
    {
        cout << -1 << '\n';
    } 
    else 
    {
        cout << st.top() << '\n';
        st.pop();
    }
}

// 3: 정수 갯수 출력
void cmd_3() 
{
    cout << st.size() << '\n';
}

// 4: 비어있으면 1, 아니면 0
void cmd_4() 
{
    if(st.empty())
        cout << 1 << '\n';
    else
        cout << 0 << '\n';
}

// 5: 맨 위 정수 출력, 비어있으면 -1
void cmd_5() 
{
    if (st.empty()) 
        cout << -1 << '\n';
    else 
        cout << st.top() << '\n';
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    if(N < 1 || N > 1'000'000) return 0;

    while (N--) 
    {
        int cmd;
        cin >> cmd;

        if (cmd == 1) 
        {
            int x;
            cin >> x;
            cmd_1(x);
        } 
        else if (cmd == 2) 
            cmd_2();
        else if (cmd == 3) 
            cmd_3();
        else if (cmd == 4)
            cmd_4();
        else if (cmd == 5)
            cmd_5();
    }

    return 0;
}