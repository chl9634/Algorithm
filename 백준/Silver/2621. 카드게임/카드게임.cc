#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
    vector<pair<char, int>> card(5); // 입력된 카드
    vector<int> color(4, 0); // 색깔별 갯수
    vector<int> number(10, 0); // 숫자별 갯수
            
    for (int i = 0; i < 5; i++) 
    {
        char ch;
        int num;
        cin >> ch >> num;
        card[i] = {ch, num};
        number[num]++;
        if (ch == 'R') 
            color[0]++;
        else if (ch == 'B') 
            color[1]++;
        else if (ch == 'Y') 
            color[2]++;
        else if (ch == 'G') 
            color[3]++;
    }

    // 숫자로 정렬
    sort(card.begin(), card.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    // 같은 색상인지 확인
    bool same_color = false;
    for (int i = 0; i < 4; i++) 
    {
        if (color[i] == 5) 
        {
            same_color = true;
            break;
        }
    }

    // 연속된 숫자인지 확인
    bool straight = true;
    for (int i = 1; i < 5; i++) 
    {
        if (card[i].second != card[i-1].second + 1) 
        {
            straight = false;
            break;
        }
    }

    int max_num = card[4].second; // 가장 큰 숫자
    int first_count = 0; // 1번째로 많이 나온 숫자
    int first_num = 0; // 1번째로 많이 나온 숫자의 횟수
    int second_count = 0; // 2번째로 많이 나온 숫자
    int second_num = 0; // 2번째로 많이 나온 숫자의 횟수

    for (int i = 1; i <= 9; i++) 
    {
        if (number[i] > first_count) 
        {
            second_count = first_count;
            second_num = first_num;
            first_count = number[i];
            first_num = i;
        } 
        else if (number[i] > second_count) 
        {
            second_count = number[i];
            second_num = i;
        }
    }

    int score = 0;

    // 모두 같은 색깔, 연속
    if (same_color && straight)
        score = max(score, 900 + max_num);

    // 같은 숫자 4장
    if (first_count == 4)
        score = max(score, 800 + first_num);
 
    // 같은 숫자 3장, 2장
    if (first_count == 3 && second_count == 2)
        score = max(score, 700 + first_num * 10 + second_num);

    // 모두 같은 색깔
    if (same_color)
        score = max(score, 600 + max_num);

    // 모두 연속 숫자
    if (straight)
        score = max(score, 500 + max_num);

    // 같은 숫자 3장
    if (first_count == 3)
        score = max(score, 400 + first_num);

    // 같은 숫자 2개가 2쌍
    if (first_count == 2 && second_count == 2)
        score = max(score, 300 + max(first_num, second_num) * 10 + min(first_num, second_num));

    // 같은 숫자 2개가 1쌍
    if (first_count == 2)
        score = max(score, 200 + first_num);

    // 가장 큰 숫자
    score = max(score, 100 + max_num);

    cout << score << endl;

    return 0;
}