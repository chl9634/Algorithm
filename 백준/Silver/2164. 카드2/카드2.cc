#include <iostream>
#include <deque>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    deque<int> card_queue;
    
    int N;
    cin >> N;
    
    if(N < 1 || N > 500000) return 0;

    for (int i = 1; i <= N; i++)
        card_queue.push_back(i);

    while (true) 
    {
        if (card_queue.size() == 1) // 1장 남을 때까지 반복
            break;

        card_queue.pop_front(); // 맨 위의 카드 버림
        
        card_queue.push_back(card_queue.front()); // 맨 앞의 카드와 같은 숫자를 맨 뒤에 추가함
        card_queue.pop_front(); // 맨 앞의 카드를 없앰
    }

    cout << card_queue.front() << "\n";
    return 0;
}