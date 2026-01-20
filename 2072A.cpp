#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        int need = abs(k);
        int ops = need / p + (need % p != 0);

        if (ops > n) {
            cout << -1 << "\n";
        } else {
            cout << ops << "\n";
        }
    }

    return 0;
}

