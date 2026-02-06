#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < m; i++)
        cin >> b[i];

    set<int> setA(a.begin(), a.end());
    set<int> setB(b.begin(), b.end());

    int commonMin = 10;

    for(int x : setA) {
        if(setB.count(x))
            commonMin = min(commonMin, x);
    }

    if(commonMin != 10) {
        cout << commonMin;
    }
    else {
        int minA = *min_element(a.begin(), a.end());
        int minB = *min_element(b.begin(), b.end());

        int num1 = minA * 10 + minB;
        int num2 = minB * 10 + minA;

        cout << min(num1, num2);
    }

    return 0;
}
