#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s = "";
    int num = 1;
    while(s.length() < t){
        s = s + to_string(num);
        num++;
    }
    cout << s[t-1];
        
    return 0;
}
