#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    
    if (N < 2 || N > 100) return 0;
    
    vector<string> channel(N);
    
    int kbs1_pos, kbs2_pos; // kbs1,2의 위치
    
    for (int i = 0; i < N; i++) 
    {
        cin >> channel[i];
        if (channel[i] == "KBS1") 
            kbs1_pos = i;
    }
    
    string result = "";
    int cur_pos = 0; // 화살표 위치
    
    // kbs1 이동
    while (cur_pos < kbs1_pos) 
    {
        result += '1';
        cur_pos++;
    }
    
    int idx = kbs1_pos;
    
    for(int i = 0; i < idx; i++)
    {
        result += '4';
        swap(channel[kbs1_pos], channel[kbs1_pos - 1]);
        kbs1_pos--;
        cur_pos--;
    }
     
    // kbs2 이동
    for (int i = 0; i < N; i++) 
    {
        if (channel[i] == "KBS2") 
            kbs2_pos = i;
    }
    
    while (cur_pos < kbs2_pos) 
    {
        result += '1';
        cur_pos++;
    }
    
    if (kbs2_pos == 1) 
    {
        cout << result << '\n';
        return 0;
    }
    
    idx = kbs2_pos;

    for(int i = 0; i < idx - 1; i++)
    {
        result += '4';
        swap(channel[kbs2_pos], channel[kbs2_pos - 1]);
        kbs2_pos--;
        cur_pos--;
    }   
    cout << result << '\n';
    return 0;
}