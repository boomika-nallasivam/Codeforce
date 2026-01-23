#include <bits/stdc++.h>
using namespace std;

long long f(long long x, long long a) {
    return (x / a) + (x % a);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, r, a;
        cin >> l >> r >> a;

        long long ans = f(r, a);

        long long x = (r / a) * a - 1;
        if (x >= l) {
            ans = max(ans, f(x, a));
        }

        cout << ans << "\n";
    }
    return 0;
}
