#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;


    for (int i = 0; i <t ; i++) {
        int n , m;
        cin >> n >> m;
        if(n<m) cout << n << " " ;
        else cout << m << " ";
        if(m>n) cout << m << endl;
        else cout << n << endl;
    }

    return 0;
}
