#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    cin >> str;
    
    if(str.size() > 4) return 0;
    
    int count = 1;
    int before_c_cnt = 0;
    int before_d_cnt = 0;
    
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 0)
        {
            if(str[i] == 'c')
            {
                count *= 26;
                before_c_cnt = 1;
            }
            else
            {
                count *= 10;
                before_d_cnt = 1;
            }
        }
        else
        {
            if(str[i] == 'c')
            {
                count *= (26 - before_c_cnt);
                before_c_cnt = 1;
                before_d_cnt = 0;
            }
            else
            {
                count *= (10 - before_d_cnt);
                before_d_cnt = 1;
                before_c_cnt = 0;
            }
        }
    }
    
    cout << count << "\n";
    
    return 0;
}