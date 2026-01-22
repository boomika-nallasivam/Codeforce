#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        vector<long long> candidates;
        candidates.push_back((long long)a1 + a2);
        candidates.push_back((long long)a4 - a2);
        candidates.push_back((long long)a5 - a4);

        int best = 0;
        for (long long a3 : candidates) {
            int cnt = 0;
            if (a3 == (long long)a1 + a2) cnt++;
            if ((long long)a2 + a3 == a4) cnt++;
            if ((long long)a3 + a4 == a5) cnt++;
            best = max(best, cnt);
        }

        cout << best << "\n";
    }

    return 0;
}
