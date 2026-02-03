#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[26][26] = {0};

    int mx = 0;
    string ans = "";

    for (int i = 0; i < n - 1; i++) {
        int a = s[i] - 'A';
        int b = s[i+1] - 'A';

        freq[a][b]++;

        if (freq[a][b] > mx) {
            mx = freq[a][b];
            ans = s.substr(i, 2);
        }
    }

    cout << ans;
}
