#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n;
        string a;
        cin >> a;

        cin >> m;
        string b;
        cin >> b;

        string c;
        cin >> c;

        string front = "";
        string back = a;

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                front += b[i];
            } else {
                back += b[i];
            }
        }

        reverse(front.begin(), front.end());
        cout << front + back << "\n";
    }

    return 0;
}
