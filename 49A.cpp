#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for(int i = s.length() - 1; i >= 0; i--) {
        if(isalpha(s[i])) {
            char ch = toupper(s[i]);

            if(ch == 'A' || ch == 'E' || ch == 'I' || 
               ch == 'O' || ch == 'U' || ch == 'Y') {
                cout << "YES";
            } else {
                cout << "NO";
            }
            break;
        }
    }

    return 0;
}
