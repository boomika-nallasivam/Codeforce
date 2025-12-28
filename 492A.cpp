#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    int sum = 0;
    int level = 0;

    for (int i = 1; ; i++) {
        sum += i;           
        if (t - sum < 0) break;

        t -= sum;            
        level++;
    }

    cout << level << endl;
    return 0;
}
