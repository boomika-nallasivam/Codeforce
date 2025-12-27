#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        
        string s;
        cin >> s;
        

        if(s == "abc") cout << "YES" << endl;
        else if(s[0] == 'a'){
            swap(s[1],s[2]);
            cout << "YES" << endl;
            
        }
        else if(s[0] == 'b' && s[2]=='c'){
            swap(s[0],s[1]);
            cout << "YES" << endl;
        }
        else if(s[0] == 'c' && s[1] == 'b'){
            swap(s[0],s[2]);
            cout << "YES" << endl;
        }
        
        else cout << "NO" << endl;
        
    }

    return 0;
}
