#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long mn = LLONG_MAX;
    int idx = -1, countMin = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < mn) {
            mn = a[i];
            idx = i;
            countMin = 1;
        } else if (a[i] == mn) {
            countMin++;
        }
    }

    if (countMin > 1) {
        cout << "Still Rozdil\n";
    } else {
        cout << idx + 1 << "\n"; // 1-based index
    }
    return 0;
}
