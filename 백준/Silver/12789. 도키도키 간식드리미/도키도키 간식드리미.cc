#include <iostream>
#include <stack>
#include <vector>
using namespace std;

// 스택 계산 함수
bool stackCalc(vector<int>& person, int N) 
{
    stack<int> person_stack;
    int num = 1; // 학생 번호
    for(int i = 0; i < person.size(); i++)
    {
        if (person[i] == num) // 현재 줄에서 맞는 순서의 학생이 있으면 다음 순번으로 넘어감
        {
            num++;
            continue;
        } 
        else if (!person_stack.empty() && person_stack.top() == num) // 임시 줄에서 맞는 순서의 학생이 있을때
        {
            person_stack.pop();
            num++;
            i--;
        } 
        else // 순서가 아닌 학생은 임시 줄로 넣음
        {
            person_stack.push(person[i]);
        }
    }

    while (!person_stack.empty() && person_stack.top() == num) // 현재 줄이 다 끝나고 임시 줄에서 순서대로 있으면 전부 진행
    {
        person_stack.pop();
        num++;
    }

    if (num == N + 1)
        return true;
    else
        return false;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    if (N < 1 || N > 1000) return 0;
    
    vector<int> person(N);

    for (int i = 0; i < N; i++)
        cin >> person[i];

    if (stackCalc(person, N))
        cout << "Nice" << "\n";
    else
        cout << "Sad" << "\n";

    return 0;
}