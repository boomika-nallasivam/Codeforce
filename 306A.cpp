#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int base = n / m;
    int rem = n % m;

    for(int i = 0; i < m; i++) {
        if(i < rem)
            cout << base + 1 << " ";
        else
            cout << base << " ";
    }

    return 0;
}
