#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    
    vector<int> order(K);
    set<int> kinds;
    for (int i = 0; i < K; i++) {
        cin >> order[i];
        kinds.insert(order[i]);
    }
    
    if ((int)kinds.size() <= N) {
        cout << "0\n";
        return 0;
    }
    set<int> plugged;
    int ans = 0;
    
    for (int i = 0; i < K; i++) {
        int now = order[i];
        
        if (plugged.count(now)) 
            continue;

        if ((int)plugged.size() < N) {
            plugged.insert(now);
            continue;
        }
        int victim = -1;
        int latest = -1;
        
        for (int cur : plugged) {
            int nextUse = K + 1; 
            for (int j = i + 1; j < K; j++) {
                if (order[j] == cur) {
                    nextUse = j;
                    break;
                }
            }
            
            if (nextUse > latest) {
                latest = nextUse;
                victim = cur;
            }
        }

        plugged.erase(victim);
        plugged.insert(now);
        ans++;
    }
    
    cout << ans << "\n";
    return 0;
}