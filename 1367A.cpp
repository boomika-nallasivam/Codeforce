#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    
    
    for(int i=0 ; i<n ; i++){
        string s;
        cin >> s;
        
        string ss ;
        ss = s[0];
        for(int i=1 ; i<s.length() ; i+=2){
            ss += s[i];
        }
        cout << ss << endl;
    }
    
    return 0;
}
