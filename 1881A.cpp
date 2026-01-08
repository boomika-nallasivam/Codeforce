#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        string cur = x;
        int cnt = 0;

        while (cur.size() < s.size()) {
            cur += cur;
            cnt++;
        }

        if (cur.find(s) != string::npos) {
            cout << cnt << '\n';
            continue;
        }

        for (int i = 0; i < 5; i++) {
            cur += x;
            cnt++;
            if (cur.find(s) != string::npos) {
                cout << cnt << '\n';
                goto done;
            }
        }

        cout << -1 << '\n';
        done:;
    }
    return 0;
}
