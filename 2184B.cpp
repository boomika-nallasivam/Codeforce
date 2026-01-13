#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        long long lastFlip = (m / k) * k;
        long long remaining = s - (m - lastFlip);

        cout << max(0LL, remaining) << "\n";
    }

    return 0;
}
