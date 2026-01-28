#include <bits/stdc++.h>
using namespace std;

int main() {    
    
    int n;
    cin >> n;
    while(n--){
        
        string s;
        cin >> s;
        
        for(char &c : s){
            c = tolower(c);
        }
        
        cout << (s == "yes" ? "YES\n" : "NO\n");

        
    }
    
    
    return 0;
}
