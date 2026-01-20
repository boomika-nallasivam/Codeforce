#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = "";
        int i = 0;

        while (i < n) {
            char c = s[i];
            ans += c;
            i++;
            while (i < n && s[i] != c) {
                i++;
            }
            i++; // skip the matching character
