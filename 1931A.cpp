#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s = "aaa";   // starting sum = 3
        int rem = n - 3;

        for (int i = 2; i >= 0 && rem > 0; --i) {
            int add = min(rem, 25);
            s[i] = char(s[i] + add);
            rem -= add;
        }
        cout << s << "\n";
    }
    return 0;
}
