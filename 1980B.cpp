#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int fav = a[f - 1];

        int cntGreater = 0, cntGreaterEqual = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > fav) cntGreater++;
            if (a[i] >= fav) cntGreaterEqual++;
        }

        if (cntGreater >= k) {
            cout << "NO\n";
        } else if (cntGreaterEqual < k) {
            cout << "YES\n";
        } else {
            cout << "MAYBE\n";
        }
    }

    return 0;
}
