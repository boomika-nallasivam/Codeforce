#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for(int i = 0; i < n; i++)
            cin >> p[i];

        int pos = 0;
        for(int i = 0; i < n; i++) {
            if(p[i] == n) {
                pos = i;
                break;
            }
        }

        reverse(p.begin(), p.begin() + pos + 1);

        for(int x : p)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
