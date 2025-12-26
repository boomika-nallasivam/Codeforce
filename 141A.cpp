#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string a , b , c;
    cin >> a >> b >> c;
    
    sort(c.begin(),c.end());
    string ab = a+b;
    sort(ab.begin(),ab.end());
    if(ab == c){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    
    return 0;
}
