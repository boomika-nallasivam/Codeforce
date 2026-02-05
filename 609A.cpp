#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.rbegin(), a.rend());

    int sum = 0, count = 0;

    for(int x : a){
        sum += x;
        count++;
        if(sum >= m) break;
    }

    cout << count;
}
