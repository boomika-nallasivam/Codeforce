#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;
        int cost = 0;
        cost += (n / 2) * min(2 * a, b);
        if(n % 2) cost += a;
        cout << cost << "\n";
    }
    return 0;
}
