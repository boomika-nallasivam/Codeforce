#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<long long>> a(n+1, vector<long long>(n+1, 0));
    
    // Initialize first row and first column
    for (int i = 1; i <= n; i++) {
        a[i][1] = 1;
        a[1][i] = 1;
    }
    
    // Fill the table
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
        }
    }
    
    cout << a[n][n] << endl;
    return 0;
}
