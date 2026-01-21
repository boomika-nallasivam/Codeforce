#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    long long mn = LLONG_MAX;
    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;
        mn = min(mn, llabs(x));
    }
    cout << mn << "\n";
    return 0;
}
