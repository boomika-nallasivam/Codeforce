#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        // Check if all characters are the same
        bool allSame = true;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[0]) {
                allSame = false;
                break;
            }
        }

        if (allSame) {
            cout << "NO\n";
        } else {
            // Sort to get a different permutation
            sort(s.begin(), s.end());
            cout << "YES\n";
            cout << s << "\n";
        }
    }

    return 0;
}
