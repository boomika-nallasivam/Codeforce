#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> res;
        int place = 1;

        while (n > 0) {
            int d = n % 10;
            if (d != 0)
                res.push_back(d * place);
            n /= 10;
            place *= 10;
        }

        cout << res.size() << endl;
        for (int x : res)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
