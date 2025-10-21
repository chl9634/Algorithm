#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if (N < 1 || N > 100) return 0;
    
    vector<string> square(N);
    for (int i = 0; i < N; i++)
        cin >> square[i];
    
    int width = 0; 
    int height = 0; 

    // 가로
    for (int i = 0; i < N; i++) 
    {
        stringstream stream(square[i]);
        string token;
        while (getline(stream, token, 'X')) 
        {
            if (token.length() >= 2) 
                width++;
        }
    }
    
    // 세로
    for (int j = 0; j < N; j++) 
    {
        string str;
        for (int k = 0; k < N; k++)
            str += square[k].substr(j, 1);

        stringstream stream(str);
        string token;
        while (getline(stream, token, 'X')) 
        {
            if (token.length() >= 2) 
                height++;
        }
    }
    
    cout << width << " " << height << endl;
    return 0;
}