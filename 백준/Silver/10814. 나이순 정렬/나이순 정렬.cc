#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    if(N < 1 || N > 100000)
        return 0;

    pair<int, string> arr[100000];

    for (int i = 0; i < N; i++)
        cin >> arr[i].first >> arr[i].second;

    stable_sort(arr, arr + N, [](const pair<int, string>& a, const pair<int, string>& b) {
        return a.first < b.first;
    });

    for (int i = 0; i < N; i++)
        cout << arr[i].first << " " << arr[i].second << "\n";

    return 0;
}