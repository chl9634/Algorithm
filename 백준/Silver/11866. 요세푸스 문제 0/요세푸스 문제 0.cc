#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    deque<int> human_queue;
    vector<int> human_vec;
    int N, K;
    cin >> N >> K;
    
    if(N < 1 || N > 1000) return 0;
    if(K < 1 || K > 1000) return 0;


    for (int i = 1; i <= N; i++) 
        human_queue.push_back(i);

    while (true) 
    {
        if(human_queue.empty())
            break;

        for (int i = 1; i < K; i++) 
        {
            human_queue.push_back(human_queue.front()); // 맨 앞의 숫자를 맨 뒤에 추가
            human_queue.pop_front(); // 맨 앞의 숫자 제거
        }

        human_vec.push_back(human_queue.front()); // K 번째 사람 벡터에 저장
        human_queue.pop_front(); // K 번째 사람 제거
    }

    cout << "<";
    for (int i = 0; i < human_vec.size(); i++) 
    {
        cout << human_vec[i];
        if (i != human_vec.size() - 1)
            cout << ", ";
    }
    cout << ">\n";

    return 0;
}