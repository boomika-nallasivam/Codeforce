#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;

    vector<pair<int,int>> interval(n);
    for(int i = 0; i < n; i++)
        cin >> interval[i].first >> interval[i].second;

    long long total = 0;

    for (auto &iv : interval)
        total += 1LL * (iv.second - iv.first) * P1;

    for (int i = 0; i + 1 < n; i++) {
        int gap = interval[i+1].first - interval[i].second;

        int x = min(gap, T1);
        total += 1LL * x * P1;
        gap -= x;

        x = min(gap, T2);
        total += 1LL * x * P2;
        gap -= x;

        total += 1LL * gap * P3;
    }

    cout << total;
    return 0;
}
