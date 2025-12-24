#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());
        string target = "Timur";
        sort(target.begin(), target.end());

        cout << (s == target ? "YES\n" : "NO\n");
    }
    return 0;
}
