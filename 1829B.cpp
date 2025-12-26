#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int maxZeros = 0, currentZeros = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == 0) {
                currentZeros++;
                maxZeros = max(maxZeros, currentZeros);
            } else {
                currentZeros = 0;
            }
        }

        cout << maxZeros << endl;
    }

    return 0;
}
