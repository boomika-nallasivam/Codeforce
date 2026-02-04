#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int prev = 0;   // before game starts

    for(int i = 0; i < n; i++) {
        if(a[i] - prev > 15) {
            cout << prev + 15;
            return 0;
        }
        prev = a[i];
    }

    // after last interesting minute
    if(90 - prev >= 15)
        cout << prev + 15;
    else
        cout << 90;

    return 0;
}
