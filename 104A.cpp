#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int need = n - 10;

    int ans = 0;

    if (need <= 0) ans = 0;

    else if (need >= 2 && need <= 9)
        ans = 4;

    else if (need == 10)
        ans = 15;  

    else if (need == 1 || need == 11)
        ans = 4;   

    else
        ans = 0;

    cout << ans;
}
