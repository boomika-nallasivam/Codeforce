#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            sum += x;
        }
        long long r = sqrt(sum);
        if (r * r == sum) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
