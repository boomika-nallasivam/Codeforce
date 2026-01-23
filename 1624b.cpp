#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ok = false;

        // Case 1: change a
        long long na = 2*b - c;
        if (na > 0 && na % a == 0) ok = true;

        // Case 2: change b
        if ((a + c) % 2 == 0) {
            long long nb = (a + c) / 2;
            if (nb > 0 && nb % b == 0) ok = true;
        }

        // Case 3: change c
        long long nc = 2*b - a;
        if (nc > 0 && nc % c == 0) ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
