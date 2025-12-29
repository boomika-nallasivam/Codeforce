#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ans = a[0];  // distance from 0 to first point

        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[i - 1]);
        }

        ans = max(ans, x - a[n - 1]);  // last point to x

        cout << ans << "\n";
    }
    return 0;
}
