#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        map<int,int> cnt;
        for(int i = 0; i < n*n; i++){
            int x; cin >> x;
            cnt[x]++;
        }
        
        bool ok = true;
        int limit = n * (n - 1);
        
        for(auto& [color, c] : cnt){
            if(c > limit){
                ok = false;
                break;
            }
        }
        
        // Edge case: n=1, limit=0, any single candy fills the 1x1 grid
        // For n=1 the answer is always NO since the single cell is both a row and column
        
        cout << (ok ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
