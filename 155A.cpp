#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int score;
    cin >> score;

    int mn = score, mx = score;
    int cnt = 0;

    for (int i = 1; i < n; i++) {
        cin >> score;
        if (score > mx) {
            cnt++;
            mx = score;
        } else if (score < mn) {
            cnt++;
            mn = score;
        }
    }

    cout << cnt;
    return 0;
}
