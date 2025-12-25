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
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int even_wrong = 0;
        int odd_wrong = 0;

        for (int i = 0; i < n; i++) {
            if ( (i % 2) != (a[i] % 2) ) {
                if (i % 2 == 0)
                    even_wrong++;
                else
                    odd_wrong++;
            }
        }

        if (even_wrong == odd_wrong)
            cout << even_wrong << "\n";
        else
            cout << "-1\n";
    }

    return 0;
}
