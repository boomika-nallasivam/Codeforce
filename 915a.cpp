#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;

        // check divisibility
        if(k % a == 0) {
            ans = min(ans, k / a);
        }
    }

    cout << ans;
}
