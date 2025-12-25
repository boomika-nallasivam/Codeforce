#include <iostream>
using namespace std;

int main() {
    int a[5];
    for(int i = 1; i <= 4; i++)
        cin >> a[i];

    string s;
    cin >> s;

    int total = 0;
    for(char c : s) {
        total += a[c - '0'];
    }

    cout << total;
    return 0;
}
