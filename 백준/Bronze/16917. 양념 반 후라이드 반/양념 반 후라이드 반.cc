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
    
    int A,B,C,X,Y;
    cin >> A >> B >> C >> X >> Y;
    
    if(A < 1 || A > 5000) return 0;
    if(B < 1 || B > 5000) return 0;
    if(C < 1 || C > 5000) return 0;
    if(X < 1 || X > 100000) return 0;
    if(Y < 1 || Y > 100000) return 0;
    
    bool half_flag = false;
    
    if((A*0.5)+(B*0.5) > C)
        half_flag = true;
    
    int same_cnt = 0;
    if(X > Y)
       same_cnt = Y;
    else
       same_cnt = X; 
    
    int money = 0;
    if(half_flag == true)
    {
        money = C * 2 * same_cnt;
        if (X > same_cnt) 
        {
            if(A > (C*2))
                money += (X - same_cnt) * (C*2);
            else
                money += (X - same_cnt) * A;
        }
        else if (Y > same_cnt) 
        {
            if(B > (C*2))
                money += (Y - same_cnt) * (C*2);
            else
                money += (Y - same_cnt) * B;
        }
    }
    else
    {
        money = A * X + B * Y;
    }
        
    cout << money << "\n";
    
    return 0;
}