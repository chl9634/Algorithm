#include <iostream>
#include <stack>
#include <queue>
using namespace std;

 // 1: 정수 입력
 void cmd_1(int x, queue<int>& cmd_queue) 
 {
     cmd_queue.push(x);
 }

 // 2: 정수 출력, 비어있으면 -1
 void cmd_2(queue<int>& cmd_queue) 
 {
     if (cmd_queue.empty()) 
     {
         cout << -1 << '\n';
     } 
     else 
     {
         cout << cmd_queue.front() << '\n';
         cmd_queue.pop();
     }
 }

 // 3: 정수 갯수 출력
 void cmd_3(queue<int>& cmd_queue) 
 {
     cout << cmd_queue.size() << '\n';
 }

 // 4: 비어있으면 1, 아니면 0
 void cmd_4(queue<int>& cmd_queue) 
 {
     if(cmd_queue.empty())
         cout << 1 << '\n';
     else
         cout << 0 << '\n';
 }

 // 5: 맨 앞 정수 출력, 비어있으면 -1
 void cmd_5(queue<int>& cmd_queue) 
 {
     if (cmd_queue.empty()) 
         cout << -1 << '\n';
     else 
         cout << cmd_queue.front() << '\n';
 }

 // 6: 맨 뒤 정수 출력, 비어있으면 -1
 void cmd_6(queue<int>& cmd_queue)
 {
     if (cmd_queue.empty())
         cout << -1 << '\n';
     else
         cout << cmd_queue.back() << '\n';
 }

 int main() 
 {
     ios::sync_with_stdio(false);
     cin.tie(nullptr);

     int N;
     cin >> N;

     if(N < 1 || N > 2'000'000) return 0;
    
     queue<int> cmd_queue;

     for(int i = 0; i < N; i++)
     {
         string cmd;
         cin >> cmd;

         if (cmd == "push") 
         {
             int x;
             cin >> x;
             cmd_1(x, cmd_queue);
         } 
         else if (cmd == "pop") 
             cmd_2(cmd_queue);
         else if (cmd == "size") 
             cmd_3(cmd_queue);
         else if (cmd == "empty")
             cmd_4(cmd_queue);
         else if (cmd == "front")
             cmd_5(cmd_queue);
         else if (cmd == "back")
             cmd_6(cmd_queue);
     }

     return 0;
 }

