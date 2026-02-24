#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        char last = s[n-1];
        int count = 0;
        
        // Count same characters from right
        for(int i = n-1; i >= 0; i--) {
            if(s[i] == last)
                count++;
            else
                break;
        }
        
        cout << n - count << endl;
    }
}
