#include <iostream>
#include <deque>
#include <functional>
using namespace std;

using CmdFunc = function<void(deque<int>&)>;

void cmd_1(deque<int>& deck_queue) 
{
    int x;
    cin >> x;
    if (x < 1 || x > 100000) return;
    deck_queue.push_front(x);
}

void cmd_2(deque<int>& deck_queue) 
{
    int x;
    cin >> x;
    if (x < 1 || x > 100000) return;
    deck_queue.push_back(x);
}

void cmd_3(deque<int>& deck_queue) 
{
    if (deck_queue.empty()) 
        cout << -1 << '\n';
    else 
    {
        cout << deck_queue.front() << '\n';
        deck_queue.pop_front();
    }
}

void cmd_4(deque<int>& deck_queue) 
{
    if (deck_queue.empty()) 
        cout << -1 << '\n';
    else 
    {
        cout << deck_queue.back() << '\n';
        deck_queue.pop_back();
    }
}

void cmd_5(deque<int>& deck_queue) 
{
    cout << deck_queue.size() << '\n';
}

void cmd_6(deque<int>& deck_queue) 
{
    if (deck_queue.empty()) 
        cout << 1 << '\n';
    else 
        cout << 0 << '\n';
}

void cmd_7(deque<int>& deck_queue) 
{
    if (deck_queue.empty()) 
        cout << -1 << '\n';
    else 
        cout << deck_queue.front() << '\n';
}

void cmd_8(deque<int>& deck_queue) 
{
    if (deck_queue.empty()) 
        cout << -1 << '\n';
    else 
        cout << deck_queue.back() << '\n';
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    if(N < 1 || N > 1000000) return 0;

    deque<int> deck_queue;

    CmdFunc commands[8] = 
    {
        cmd_1, 
        cmd_2,
        cmd_3,
        cmd_4,
        cmd_5,
        cmd_6,
        cmd_7,
        cmd_8
    };

    for (int i = 0; i < N; i++) 
    {
        int cmd;
        cin >> cmd;

        commands[cmd - 1](deck_queue);
    }

    return 0;
}